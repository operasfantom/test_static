//user code

#include "stdio.h"

struct R {
    int sum;
};

struct S {
    int x, y;
};

static struct R foo(struct S s) {
    printf("x:%d, y:%d\n", s.x, s.y);
    struct R r = {.sum = s.x + s.y};
    return r;
}
