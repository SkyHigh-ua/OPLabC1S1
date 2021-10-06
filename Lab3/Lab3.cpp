#include <iostream>
#include <cmath>

int main()
{
    int n = 1, i = 1;
    double eps, sumfx, h, x, fx, res1, res = 0;
    std::cout << "Введіть точність ε = ";
    std::cin >> eps;
    do  
    {   
        res1 = res;
        sumfx = 0;
        h = M_PI / n;
        while (i <= n)
        {
            x = i * h - h / 2;
            fx = log( 2 + sin(x) );
            sumfx += fx;
            i++;
        }
        res = h * sumfx;
        i = 0;
        n++;
    } 
    while (abs(res - res1) > eps);
    std::cout << "Результат = " << res << std::endl;
    return 0;
}