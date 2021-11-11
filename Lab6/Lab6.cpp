#include <iostream>
#include <cmath>

double fx(double), sumx(double, double), fact(double);

int main()
{
    double a, res, num1, num2;
    std::cout << "Введіть значення a: ";
    std::cin >> a;
    num1 = 2*fx(0.5)-3*fx(a-0.1);
    num2 = 5-fx(4*a-1);
    if (num2 == 0) std::cout << "Ділення на 0" << std::endl; // Функція не існує, якщо знаменник = 0 
    else
    {
        res = num1/num2;
        std::cout << "Результат = " << res << std::endl;
    }
    return 0;
}

double fx(double x)
{
    double resfx = 0;
    resfx = sumx(1, x)/sumx(0, x);
    return resfx;
}

double sumx(double sn, double x)
{
    double resum = 0, n;
    for (int k=0; k <= 20; k++)
    {
        n = 2 * k + sn; 
        resum += pow(x, n)/fact(n);
    }
    return resum;
}

double fact(double num)
{
  if (num==0) return 1;
  else return num*fact(num-1);
}