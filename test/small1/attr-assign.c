// From some new MacOS headers: https://github.com/goblint/cil/issues/168

void foo(void) __attribute__((availability(macos,introduced=10.15)));

void foo(void) {
    return;
}
