#include "unique_ptr.hpp"
#include <cstdio>

struct Tracer {
    Tracer() {std::puts("Tracer constructed"); }
    ~Tracer() {std::puts("Tracer destroyed"); }
};

int main() {
    {
        tynystl::unique_ptr<Tracer> up(new Tracer);
        std::puts("inside scope");
    }
    std::puts("after scope");
}