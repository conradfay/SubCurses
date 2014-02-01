#include "app.h"

namespace SC {

App::App() {

}

App::~App() {

}

void App::setActiveScreen(const Screen& screen) {
    activeScreen = (Screen*)&screen;
}

void App::update() {
    activeScreen->update();    
}

}
