#include "foo.h"
#include <iostream>
#include <string>

void print() {
    std::cerr << "in bar: " << foo::HELLO_WORLD.str << std::endl;
}
