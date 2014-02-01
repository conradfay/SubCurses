#ifndef SC_SCREEN_H
#define SC_SCREEN_H

#include <string>

namespace SC {

class Screen {
    public:

        Screen();
        Screen(Screen* parent);
        ~Screen();

        virtual std::string getTitle() = 0;

        void update();

    private:

        virtual void procInput() = 0;

        virtual void render() = 0;

        virtual void updateState() = 0;

        Screen* parent;
};

}

#endif /* SC_SCREEN_H */
