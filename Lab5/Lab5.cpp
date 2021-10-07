#include <iostream>
#include <string> 

int main()
{
    int i , i1, i2, i3, i4;
    for (i = 1000; i <= 9999; i++)
    {
        i1 = i mod 10
        i2 = i mod 100 div 10
        i3 = i div 100 mod 10
        i4 = i div 1000
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
