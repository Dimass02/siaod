#include <iostream>
using namespace std;
const int col_razr = 3;
int velich_razr(int chislo, int razr)
{
    while (razr > 1)
    {
        chislo /= 10;
        razr--;
    }
    return chislo % 10;
}

void sort_razr(int dop_mas[10][10], int mas[10], int razr)
{
    int mas_col[10], i, j, temp = 0;
    for (i = 0; i < 10; i++)
        mas_col[i] = 0;
    for (i = 0; i < 10; i++)
    {
        int a = velich_razr(mas[i], razr);
        dop_mas[mas_col[a]][a] = mas[i];
        mas_col[a]++;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < mas_col[i]; j++)
        {
            mas[temp] = dop_mas[j][i];
            temp++;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int razr, i;
    int mas[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int dop_mas[10][10];
    for (razr = 1; razr < 4; razr++)
        sort_razr(dop_mas, mas, razr);
    for (i = 0; i < 10; i++)
        cout << mas[i] << endl;
    return 0;
} 
