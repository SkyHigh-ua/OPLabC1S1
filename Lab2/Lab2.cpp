#include <iostream>
#include <cmath>

int main()
{
    float x, y;
    std::cout << "Введіть координати точки: ";
    std::cin >> x >> y;
    if (x >= -1 & y <= 1 & y >= abs(x))
    {
        std::cout << "Точка належить" << std::endl;
    }
    else
    {
        std::cout << "Точка не належить" << std::endl;
    }
    return 0;
}