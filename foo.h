#ifndef foo_h
#define foo_h

#include <string>

namespace foo {
    struct helloworld {
        helloworld();
        ~helloworld();
        std::string str;
    };
    extern const struct helloworld HELLO_WORLD;
    //extern const std::string HELLO_WORLD;
    //extern const char* HELLO_WORLD;
};

#endif
