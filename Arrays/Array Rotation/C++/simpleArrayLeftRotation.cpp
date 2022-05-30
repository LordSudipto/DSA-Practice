#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// Left rotationby 'd' steps.

// Brute force
int rotateLeftBrute(int d, int size, int arr[]) {
    int newArr[size];
    int i=0, j=0;
    for(i = d; i<size; i++)
    {
        newArr[i-d] = arr[i];
    }
    for(i = size-d, j = 0; i < d, j <d; i++, j++)
    { 
        newArr[i] = arr[j];
    }
    cout<<"Brute force left rotation: ";
    for(i=0; i<size; i++)
    {
        cout<<newArr[i]<<" ";
    }
    return 0;
}

// Optimized solution

// GCD function (taken from GFG)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}

int rotateLeftOptimized (int d, int size, int arr[])
{
    int g_c_d = gcd(d, size);
    for(int i=0; i<g_c_d; i++)
    {
        int temp = arr[i];
        int j=i;

        while(1)
        {
            int k = j + d;
            if(k >= size)
            {
                k = k-size;
            }
            if(k==i)
                break;
            
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }

    cout<<"Optimized left rotation: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d;
    cout<<"Enter number of left rotations: ";
    cin>>d;
    int s = sizeof(arr)/sizeof(arr[0]);
    // Brute force left rotation
    rotateLeftBrute(d, s, arr);
    cout<<"\n";
    rotateLeftOptimized(d, s, arr);

    return 0;
}

/*
int d = 4;
    int new_arr[sizeof(arr)];
    for(int i = d; i<sizeof(arr) / sizeof(arr[0]); i++)
    {
        new_arr[i-d] = arr[i];
    }
    for(int i = (sizeof(arr) / sizeof(arr[0]))-d, j = 0; i < d, j <d; i++, j++)
    { 
        new_arr[i] = arr[j];
    }
    for(int i = 0; i<7; i++)
    {
        cout<<new_arr[i]<<" ";
    }
    return 0;
*/
