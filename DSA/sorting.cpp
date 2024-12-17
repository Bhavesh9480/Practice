#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=0, arr[5] = {4, 20, 1, 7, 19};

    for (int i = 0; i < 4;i++)
    {
        for (int j = 0; j < 4 - i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}