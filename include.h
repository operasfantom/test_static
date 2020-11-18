//generated header

//fetched names of types
struct R;
struct S;

//fetched declaration of static function
static struct R foo(struct S s);
//extern pointer to fetched static function
extern struct R (*ptr)(struct S);

//generated function to set up function pointer
void utbot_initialize_foo(void) {
    ptr = &foo;
}
