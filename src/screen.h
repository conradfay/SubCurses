#ifndef SC_SCREEN_H
#define SC_SCREEN_H

namespace SC {

class Screen {
    public:
        Screen();
        Screen(Screen* parent);
        ~Screen();

        Screen* parent;
};

}

#endif /* SC_SCREEN_H */
