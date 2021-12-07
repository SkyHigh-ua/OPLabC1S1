#include <iostream>
#include <iomanip>
#include <ctime>

void crmtrx(int, int **); // Генерація масиву
void out(int, int []); // Виведення масиву
void out(int, int **); // Виведення матриці
void vector(int, int [], int **); // Побудова вектора

int main()
{
    int len;
    std::cout << "Введіть n = ";
    std::cin >> len;
    int X[len];
    int **B = new int *[len];
    for (int i=0; i<len; i++)
    {
        B[i]=new int [len];
    }
    crmtrx(len, B);
    out(len, B);
    vector(len, X, B);
    for (int i=0; i<len; i++)
    {
        delete [] B[i];
    }
    delete [] B;
    out(len, X);
    return 0;
}

void crmtrx(int len, int **mtrx)
{
    srand(time(NULL));
    for (int i=0; i<len; i++)
    {
        for (int j=0; j<len; j++)
        {
            mtrx[i][j]= rand()%10;
        }
    }
}

void vector(int len, int lst[], int **mtrx)
{
    for (int i=0; i<len; i++)
    {
        int num=0;
        for (int j=0; j<len; j++)
        {
            num+=mtrx[i][j]*mtrx[j][i];
        }
        lst[i]=num;
    }
}

void out(int len, int lst[])
{
    std::cout << "Вектор X(n) = [";
    for (int i=0; i<len; i++)
    {   
        std::cout << " " << lst[i];
        if (i<len-1) std::cout << ",";
    }
    std::cout << " ]" << std::endl;
}

void out(int len, int **mtrx)
{
    std::cout << "Матриця B(nxn):" << std::endl;
    for (int i=0; i<len; i++)
    {
        std::cout << "|";
        for (int j=0; j<len; j++)
        {
            std::cout << std::setw(2) << mtrx[i][j];
        }
        std::cout << std::setw(2) << "|" << std::endl;
    }
}