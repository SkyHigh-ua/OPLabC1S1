#include <iostream>
#include <cmath>

int main()
{
    int x1, x2, y1, y2;
    std::cout << "Введіть координати першої точки: ";
    std::cin >> x1 >> y1;
    std::cout << "Введіть координати другої точки: ";
    std::cin >> x2 >> y2;
    int result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    std::cout << result << std::endl;
    return 0;
}