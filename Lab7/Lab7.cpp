#include <iostream>
#include <iomanip>
#include <ctime>

void crlst(double [], int); // Генерація масиву
void lstout(double [], int, int); // Виведення масиву
void sort(double [], int); // Упорядкування масиву
double sum(double [], int); // Сума елементів на парних позиціях

int main()
{
    int len;
    double s;
    std::cout << "Введіть розмір масиву = ";
    std::cin >> len;
    double lst[len];
    crlst(lst, len);
    lstout(lst, len, 0);
    sort(lst, len);
    lstout(lst, len, 1);
    s = sum(lst, len);
    std::cout << "Сума = " << s << std::endl;
    return 0;
}

void crlst(double lst[], int len)
{
    srand(time(NULL));
    for (int i=0; i<len; i++)
        {
            lst[i] = (rand()%101 - rand()%101) + double (rand()%101)/1000; 
        }
}

void sort(double lst[], int len)
{
    for (int i = 0; i < len; i++)
	{
        for (int j = i + 1; j < len; j++)
		{
			if (lst[i] < lst[j])
            {
                lst[i] += lst[j];
                lst[j] = lst[i] - lst[j];
                lst[i] -= lst[j];
            }
		}
	}
}

double sum(double lst[], int len)
{
    double res=0;
    for (int i = 1; i < len; i+=2)
    {
        res += lst[i];
    }
    return res;
}

void lstout(double lst[], int len, int n)
{
    if (n==1) std::cout << "Упорядкований масив = [";
    else std::cout << "Масив Y(n) = [";
    for (int i=0; i<len; i++)
    {
        std::cout << " " << lst[i];
        if (i<len-1) std::cout << ",";
    }
    std::cout << std::setw(2) << "]" << std::endl;
}