#include <iostream>

#if (HELLO_WORLD == 42)
constexpr int a = 2;
#endif

int main()
{
    std::cout << HELLO_WORLD << a << "\n";
}
