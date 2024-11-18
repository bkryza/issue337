#include "dir1/A.h"

static void handling(void) {}
static void main_end() {}

using namespace ns;

int main(int, const char**) {
    handling();

    A a;
    a.foo();

    main_end();

    return 0;
}
