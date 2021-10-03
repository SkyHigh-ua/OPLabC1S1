#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int n, acur;
    double sumfx = 0, h, x, fx, result;
    std::cout << "Введіть точність ε = ";
    std::cin >> acur;
    std::cout << "Введіть точність обчислень = ";
    std::cin >> n;
    sumfx = 0;
    h = M_PI / n;
    for (int i = 1; i <= n; i++)
    {
        x = i * h - h / 2;
        fx = log( 2 + sin(x) );
        sumfx += fx;
    }
    result = h * sumfx;
    std::cout << "Результат = " << std::fixed << std::setprecision(acur) << result << std::endl;
    return 0;
}