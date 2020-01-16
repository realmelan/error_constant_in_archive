#include "foo.h"
#include <iostream>

namespace foo {
    //const std::string HELLO_WORLD("hello world");
    //const char* HELLO_WORLD = "hello world";
    helloworld::helloworld()
        : str("hello world")
    {
        std::cerr << "helloworld() called for " << this << std::endl;
    }
    helloworld::~helloworld() {
        std::cerr << "~helloworld() called for " << this << std::endl;
    }
    const struct helloworld HELLO_WORLD;
}
