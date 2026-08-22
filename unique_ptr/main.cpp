#include "unique_ptr.hpp"
#include <cstdio>

struct Tracer {
    Tracer() {std::puts("Tracer constructed"); }
    ~Tracer() {std::puts("Tracer destroyed"); }
};

int main() {
    {
        tinystl::unique_ptr<Tracer> a(new Tracer);
        tinystl::unique_ptr<Tracer> b = a;
    }
    std::puts("End of main");
}