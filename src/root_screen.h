#ifndef SC_ROOT_SCREEN_H
#define SC_ROOT_SCREEN_H

#include "screen.h"

namespace SC {

class RootScreen : public Screen {

    public:

        RootScreen();
        ~RootScreen();

        virtual std::string getTitle();

    private:

        virtual void procInput();

        virtual void render();

        virtual void updateState();

};

}

#endif /* ROOT_SCREEN_H */
