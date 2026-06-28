#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int j=i;
        while(j>0 && arr[j] < arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int n;
    cout<<"enter the number of entries : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"\nEnter all Entries : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nSorted Array : ";
    insertion(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}