#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rev = 0 ;
    while(n != 0)
    {
        rev = (rev*10)+(n%10);
        n /= 10;

    }
    return rev;
}


int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<"The Reverse of "<<n<<" is  : "<<reverse(n)<<endl;



    return 0;
}