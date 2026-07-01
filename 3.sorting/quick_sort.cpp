#include<iostream>
#include<vector>
using namespace std;

void quick_asc(vector<int> &arr,int low,int high)                   //......................ASSCEDING
{
    if(low >= high) return;
    int pivot = low;
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] <= arr[pivot] && i < high)
        {
            i++;
        }
        while(arr[j] > arr[pivot] && j > low)
        {
            j--;
        }
        if(i < j)
        {
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[pivot] , arr[j]);
    quick_asc(arr,low,j-1);
    quick_asc(arr,j+1,high);
}

void quick_desc(vector<int> &arr,int low,int high)                   //...................... DESCENDING
{
    if(low >= high) return;
    int pivot = low;
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] > arr[pivot] && i < high)
        {
            i++;
        }
        while(arr[j] <= arr[pivot] && j > low)
        {
            j--;
        }
        if(i < j)
        {
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[pivot] , arr[j]);
    quick_desc(arr,low,j-1);
    quick_desc(arr,j+1,high);
}

int main()
{
    cout<<"in...";
    vector<int> arr = {5,4,3,66,7,22,1,3,5,7,888};
    quick_asc(arr,0,arr.size()-1);
    cout<<"\nAssceding order : ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }

    quick_desc(arr,0,arr.size()-1);
    cout<<"\nDescending Order : ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}