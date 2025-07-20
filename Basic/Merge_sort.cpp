#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int start,int mid,int end)
{
    vector<int> temp;
    int i = start,j=mid+1;
    while (i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }

        
        
    }
    while (i<=mid)
    {
        
            temp.push_back(arr[i]);
            i++;
    }

     while (j<=end)
     {
            temp.push_back(arr[j]);
            j++;
     }
       
    for(int i=0;i<temp.size();i++)
    {
        arr[start+i] = temp[i];
    }
    
}



void merge_sort(vector<int> &arr,int start,int end)
{
    if(start<end)
    {
    int mid = (start+end)/2 ;       //we can also use start +(end-start)/2... but sometime start + end can overflow the integer limits. 
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
    }
    

}



int main()
{
    int n,temp;
    vector<int> arr ={23,22,76,11,23};
    n=arr.size();
    
    cout<<"Original Array :";
    for(int i : arr)
    {
        cout<<i<<" ";
    }

    merge_sort(arr,0,n-1);
    

cout<<endl<<"soretd : ";

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}

