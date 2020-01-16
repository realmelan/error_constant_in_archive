#include "svc.h"
#include "foo.h"
#include "bar.h"
#include <iostream>

void say_hello() {
    print();

    std::cerr << "in svc: " << foo::HELLO_WORLD.str << std::endl;
}
