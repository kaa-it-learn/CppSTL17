#include <iostream>

class fibit
{
    std::size_t i{ 0 };
    std::size_t a{ 0 };
    std::size_t b{ 1 };

public:
    fibit() = default;
    explicit fibit(std::size_t i_) : i{ i_ } {}

    std::size_t operator*() const { return b; }

    fibit& operator++() {
        const std::size_t old_b{ b };
        b += a;
        a = old_b;
        ++i;
        return *this;
    }

    bool operator!=(const fibit& o) const { return i != o.i; };
};

class fib_range
{
    std::size_t end_n;

public:
    fib_range(std::size_t end_n_) : end_n{ end_n_ } {}

    fibit begin() const { return fibit{}; }
    fibit end() const { return fibit{ end_n }; }
};

void fib_iterators() {
    for (std::size_t i : fib_range(10)) {
        std::cout << i << ", ";
    }
    std::cout << '\n';
}