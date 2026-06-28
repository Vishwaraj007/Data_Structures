#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int> &arr,int low,int mid,int high) // function to merge the elements...................
{
    vector<int> temp;
    int i= low;
    int j = mid+1;
    while(i <= mid && j<=high) 
    {
        if(arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else if(arr[j] <= arr[i])
        {
            temp.push_back(arr[j]);
            j++;
        }

    }
    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int k = low;k<=high;k++)
    {
        arr[k] = temp[k-low];
    }
}


void merge_sort(vector<int> &arr,int low,int high)
{
    int mid = (high+low)/2;
    if(low >= high) return;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main()
{
    vector<int> arr = {6,7,2,4,6,8,1,34,2,1,1,1,1,4,888,6,7,9};
    cout<<"\nbefore sorting : ";
    for(int i : arr)
    {
        cout<<" "<<i;
    }
    merge_sort(arr,0,arr.size()-1);
    cout<<"\n after sortnig : ";
    for(int i : arr)
    {
        cout<<i<< " ";
    }
    return 0;
}
