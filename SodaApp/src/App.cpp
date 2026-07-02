#include "Soda/App.h"
#include "Soda/Color.h"

namespace Soda {

App::App(std::string_view title, int w, int h) 
    : window_{ title, w, h }
    , fb_{ w, h }
{
}

void App::Run(std::function<void(float dt, Rasterizer& rt)> frame) {
    while (!window_.ShouldClose()) {
        window_.PollEvents();
        clock_.Update();

        fb_.ClearColor(Color4f::Black);
        frame(clock_.DeltaTime(), rt_);
        window_.Present(fb_);
    }
}

}