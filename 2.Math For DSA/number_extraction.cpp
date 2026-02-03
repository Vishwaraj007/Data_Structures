#include<bits/stdc++.h>
using namespace std;

void extract_digit(int n)
{
    int i=0;
    while(n!=0)
    {
        i++;
        int dig = n%10;
        cout<<"the "<<i<<"th digit is : "<<dig<<"\n";
        n /= 10;
    
    }
}

int main()
{
    int n;
    cout<<"Enter the number  :  ";
    cin>>n;
    cout<<endl;
    extract_digit(n);
    return 0;
}