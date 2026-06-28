#include<iostream>
#include<vector>
using namespace std;
void bubble(vector<int> &arr)
{
    for(int i=0;i<=arr.size()-2;i++)
    {
        for(int j=0;j<arr.size()-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"enter the number of entries : ";
    cin>>n;
    cout<<"\n enter all the entries : ";
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    bubble(arr);
    cout<<"\n sorted array : ";
    for(int  i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}