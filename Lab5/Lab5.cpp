#include <iostream>
#include <string> 

int main()
{
    for (int i = 1000; i <= 9999; i++)
    {
        std::string n = std::to_string(i);
        if (n[0]==n[3] && n[1]==n[2])
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