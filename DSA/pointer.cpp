#include<iostream>
using namespace std;

void swap(int* x , int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 20, b = 10;
    swap(&a, &b);
    cout << a << " " << b;
    return 0;
}