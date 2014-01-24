#include "subcurses.h"

int main(int argc, char** argv) {
    SC::App subCursesApp();
    SC::RootScreen rootScreen();
    SC::BrowserScreen browserScreen(dynamic_cast<SC::Screen*>(&rootScreen));

    return 0;
}
