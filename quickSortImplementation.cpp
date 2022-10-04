#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;
    cout <<"Enter the size of the array:";
    cin >>n;
    int arr[n];
    cout <<"Enter the elements of the array:";
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array is:";
    for(int i =0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
    
    cout <<endl;
    cout <<"Array after sorting:";
    for(int i =0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}
