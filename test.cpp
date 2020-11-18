//generated test

#include <cstdio>
#include <cassert>

extern "C" {
//declaration of generated function
void utbot_initialize_foo(void);
}

//fetched definitions of types
struct R {
    int sum;
};

struct S {
    int x, y;
};

//pointer to fetched static function
R (*ptr)(struct S);

//simulation of generate test
int main() {
    struct S s;
    s.x = -10;
    s.y = +100;
    utbot_initialize_foo();
    struct R r = (*ptr)(s);
    printf("sum:%d\n", r.sum);
    struct R expected;
    expected.sum = 90;
    assert(expected.sum == r.sum);
}
