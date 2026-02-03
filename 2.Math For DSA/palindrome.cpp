#include<bits/stdc++.h>
using namespace std;

int reverse(int n)  // supportive function
{
    int rev = 0 ;
    while(n != 0)
    {
        rev = (rev*10)+(n%10);
        n /= 10;

    }
    return rev;
}

bool palindrome(int n)
{
    int rev = reverse(n);
    if(n==rev) return true;
    return false;
}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    if(palindrome(n))
        cout<<"The "<<n<<" is Palindrome...";
    else
        cout<<"The "<<n<<" is Not Palindrome...";

    cout<<endl;

    return 0;
}