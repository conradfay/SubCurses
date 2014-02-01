#include "screen.h"
#include <iostream>

namespace SC {

Screen::Screen() {

}

Screen::Screen(Screen* parent) : parent(parent) {

}

Screen::~Screen() {

}

void Screen::update() {
    std::cout << "hi";
    procInput();
    /*
    updateState();
    render();
    parent->update();
    */
}

}
