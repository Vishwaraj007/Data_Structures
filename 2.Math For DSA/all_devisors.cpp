#include<bits/stdc++.h>
using namespace std;

vector<int> fact(int n)
{
    vector<int> arr;
    int n1 =n;
    int i = 1;
    while(i<=n1/i)
    {
        if(n1 % i == 0)
        {
            arr.push_back(i);
            if(i != n1) arr.push_back(n1/i);
            
        }
        i++;
    }
    return arr;
} 

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    vector<int> v = fact(n);
    cout<<"\nThe Factors of "<<n<<" are : ";
    for(int i : v)
    {
        cout<< i<<" ";
    }

    return 0;
}