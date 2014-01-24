#ifndef SC_BROWSER_SCREEN_H
#define SC_BROWSER_SCREEN_H

#include "screen.h"

namespace SC {

class BrowserScreen : public Screen {
    public:
        BrowserScreen();
        BrowserScreen(Screen* parent);
        ~BrowserScreen();
};

}

#endif /* SC_BROWSER_SCREEN_H */
