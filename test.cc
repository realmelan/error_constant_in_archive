#include "svc.h"
#include "foo.h"
#include <iostream>


int main() {
    say_hello();
    std::cerr << "in main: " << foo::HELLO_WORLD.str << std::endl;
    return 0;
}
