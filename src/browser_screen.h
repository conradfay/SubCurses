#ifndef SC_BROWSER_SCREEN_H
#define SC_BROWSER_SCREEN_H

#include "screen.h"

namespace SC {

class BrowserScreen : public Screen {

    public:

        BrowserScreen();
        BrowserScreen(Screen* parent);
        ~BrowserScreen();

        virtual std::string getTitle();

    private:

        virtual void procInput();

        virtual void render();

        virtual void updateState();

};

}

#endif /* SC_BROWSER_SCREEN_H */
