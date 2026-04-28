# Soda — 학습용 렌더러 프로젝트
# 루트 CMakeLists. 프로젝트 메타·공통 컴파일 옵션·하위 디렉터리만 다룬다.

cmake_minimum_required(VERSION 3.20)

project(Soda LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# MSVC 핫 리로드 지원 - VS 마법사 기본
if(POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# 모든 하위 타겟에 적용될 경고 정책.
if(MSVC)
    add_compile_options(/W4 /permissive-)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 챕터별 하위 프로젝트.
add_subdirectory(soda-tiny)
