#include <iostream>

double f(double d)
{
    return d > 1e7 ? throw std::overflow_error("too big") : d;
}
int main()  
{
    try {
        std::cout << f(1e10) << '\n';
    } catch (const std::overflow_error& e) {
        std::cout << e.what() << '\n';
    }
}

