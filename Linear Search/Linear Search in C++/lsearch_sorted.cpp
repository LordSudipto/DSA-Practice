#include<iostream>
using namespace std;

int main()
{
    int n=0, res = 0, pos = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Enter a number to search: ";
    cin>>n;

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(i==n)
        {
            res = 1;
            pos = i;
            break;
        }
    }

    if(res == 1)
    {
        cout<< n <<" found at "<< pos;
    }
    else if(res == 0)
    {
        cout<<"Element not found";
    }
    return 0;
}
