#ifndef SC_APP_H
#define SC_APP_H

#include "screen.h"

namespace SC {

class App {
    public:
        App();
        ~App();

        void setActiveScreen(const Screen& screen);

        void update();

    private:
        Screen* activeScreen;
};

}

#endif /* SC_APP_H */
