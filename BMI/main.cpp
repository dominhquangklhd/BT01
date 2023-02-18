#include <iostream>

using namespace std;

int main()
{
    float chieucao, cannang;
    cout << "Nhap can nang(kg): "; cin >> cannang;
    cout  << "Nhap chieu cao(m): "; cin >> chieucao;

    float BMI = cannang/(chieucao*chieucao);
    cout << BMI;
    return 0;
}
