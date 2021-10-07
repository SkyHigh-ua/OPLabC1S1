#include <iostream>

int main()
{
    int i , i1, i2, i3, i4;
    for (i = 1000; i <= 9999; i++)
    {
        i1 = i % 10;
        i2 = i % 100 / 10;
        i3 = i / 100 % 10;
        i4 = i / 1000;
        if (i1==i4 && i2==i3)
        {
            std::cout << i << '\n';
        }
        else
        {
            continue;
        }
    }
    return 0;
}
