#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2)
{
    while(n1 > 0 && n2 > 0)
    {
        if(n1 > n2) n1 %= n2;
        else n2 %= n1;
    }
    return max(n1,n2);
}


int main()
{
    int n1,n2;
    cout<<"\n Enter first number : ";
    cin>>n1;
    cout<<"\n Enter second number : ";
    cin>>n2;
    cout<<"\nThe gcd of "<<n1<<" and "<<n2<<"  = "<<gcd(n1,n2)<<endl;

    return 0;
}