#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int min = i;
        for(int j =i+1;j<arr.size();j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{   
    int n;
    cout<<"\nenter the number of entries : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"\nenter all the entries : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}