#include "subcurses.h"
#include <iostream>

int main(int argc, char** argv) {

    // Set up app.
    SC::App subCursesApp;
    SC::RootScreen rootScreen;
    SC::BrowserScreen browserScreen(&rootScreen);

    // Main loop.
    bool quit = false;
    while (!quit) {
        subCursesApp.update();
    }

    return 0;
}
