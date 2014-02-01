#include "browser_screen.h"
#include <iostream>

namespace SC {

BrowserScreen::BrowserScreen() {

}

BrowserScreen::BrowserScreen(Screen* parent) : Screen(parent) {

}

BrowserScreen::~BrowserScreen() {

}

std::string BrowserScreen::getTitle() {
    return "Browser Screen";
}

void BrowserScreen::procInput() {
    std::cout << "yo" << std::endl;
}

void BrowserScreen::render() {

}

void BrowserScreen::updateState() {

}

}
