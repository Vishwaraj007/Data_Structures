#include<bits/stdc++.h>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int min, int max)
{
    int pivot = min;
    int i = min;
    int j = max;
    while(i<=j)
    {
        while(arr[i]<=arr[pivot] && i < max)
        {
            i++;
        }
        while(arr[j]>arr[pivot] && j > min)
        {
            j--;
        }
        if(i < j)
            swap(arr[i],arr[j]);
    }
    swap(arr[pivot],arr[j]);
return j;
}

void quick(vector<int> &arr,int min, int max)
{
    int par = partition(arr,min,max);
    if(min < max)
    {
        quick(arr, min,par-1);
        quick(arr, par+1,max);
    }
}




int main()
{
    vector<int> arr = {89,1,44,67,2};
    cout<<"Hello";
    quick(arr,0,arr.size()-1);
    for(int i : arr)
    {
        cout<<i;
    }
    return 0;
}