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
/*
Виправлений варіант
{
    int i , j, res;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
            {
                res = i * 1001 + j * 110;
                std::cout << res << std::endl;
            }
    }
    return 0;
}
*/
