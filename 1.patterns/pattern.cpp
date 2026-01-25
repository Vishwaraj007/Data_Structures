#include<bits/stdc++.h>
using namespace std;

void patt_1(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void patt_2(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void patt_3(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void patt_4(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void patt_5(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}
void patt_6(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void patt_7(int n){
    for(int i=0;i<n;i++)
    {
        for(int s_space=0;s_space<n-i-1;s_space++)
        {
            cout<<" ";
        }
        for(int star =0;star<=i;star++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }


}
void patt_8(int n){
    for(int i=0;i<n;i++)
    {
        for(int s_space =0;s_space<i;s_space++)
        {
            cout<<" ";
        }
        for(int star = 0;star < n-i; star++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}
void patt_9(int n){
    for(int i=0;i<n;i++)
    {
        for(int s_space=0;s_space<n-i-1;s_space++)
        {
            cout<<" ";
        }
        for(int star =0;star<=i;star++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int s_space =0;s_space<i;s_space++)
        {
            cout<<" ";
        }
        for(int star = 0;star < n-i; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void patt_10(int n){
    for(int i=0;i<=n*2;i++)
    {
        if(i>n)
        {
            for(int j=0;j<=(n*2)-i;j++)
                cout<<"* ";
        }
        else
        {
            for(int j=0;j<=i;j++)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
void patt_11(int n){
    int start =0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            start = 1;
        }
        for(int j=0;j<=i;j++)
        {
            
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
        
    }
}

void patt_12(int n){
    int g_space = 2*(n-1);
    for(int i=1;i<=n;i++)
    {
        for(int s_num =1;s_num<=i;s_num++)
        {
            cout<<" "<<s_num;
        }

        for(int space = 1;space <= g_space;space++)
        {
            cout<<"  ";
        }
        
        for(int e_num =i;e_num>=1;e_num--)
        {
            cout<<e_num<<" ";
        }
        cout<<endl;
        g_space -=2;

    }
}

void patt_13(int n){
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num++<<" ";
        }
        cout<<endl;
    }
}

void patt_14(int n){
    for(int i=0;i<n;i++)
    {
        for(char c='A';c<='A'+i;c++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }

}

void patt_15(int n){
    for(int i=0;i<n;i++)
    {
        for(char c='A';c < 'A'+n-i;c++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

void patt_16(int n){
    for(int i=0;i<n;i++)
    {
         char c = 'A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

void patt_17(int n){
    for(int i=0;i<n;i++)
    {
        char ch = 'A';
        for(int s_space = 1;s_space <= n-i-1;s_space++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i+1);j++)
        {
            int breakpoint = (2*i+1)/2;
            cout<<ch;
            if(j < breakpoint)
            {
               ch++;
            }
            else{
                ch--;
            }
            

        }
        cout<<endl;
    }

}

void patt_18(int n){
    for(int i=0;i<n;i++)
    {
        for(char ch = 'A'+n-i-1;ch <= 'A'+n-1;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void patt_19(int n){
    for(int i=0;i<n;i++)
    {
        
            for(int s_star=n;s_star>i;s_star--)
            {
                cout<<"*";               
            }
            
            for(int space =0;space <=i*2;space++)
            {
                cout<<" ";
            }
            for(int e_star=n;e_star>i;e_star--)
            {
                cout<<"*";               
            }

        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        
            for(int s_star=n-i;s_star<n;s_star++)
            {
                cout<<"*";               
            }
            
            for(int space =0;space <= (n*2)-(i*2);space++)
            {
                cout<<" ";
            }
            for(int s_star=n-i;s_star<n;s_star++)
            {
                cout<<"*";               
            }

        cout<<endl;
    }
}

void patt_20(int n){
     int spaces = (2*n-1);
    for(int i = 1;i<=n*2-1;i++)
    {
        //for starting stars
        if(i<=n)
        {
            for(int s_star=1;s_star<=i;s_star++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int s_star=1;s_star<=n*2-i;s_star++)
            {
                cout<<"*";
            }
        }

        //for spaces...!
       
        if(i<=n)
        {
            spaces -= 2;
            for(int j=0;j<=spaces;j++)
            {
                cout<<" ";
            }
            
        }
        else
        {
            spaces += 2;
            for(int j=0;j<=spaces;j++)
            {
                cout<<" ";
            }
            
        }
      
        //for ending stars......!
        if(i<=n)
        {
            for(int s_star=1;s_star<=i;s_star++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int s_star=1;s_star<=n*2-i;s_star++)
            {
                cout<<"*";
            }
        }

        cout<<endl;
    }
   
}


void patt_21(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}

void patt_22(int n){
    for(int i=1;i<n*2;i++)
    {
        for(int j=1;j<n*2;j++)
        {
            int  top = i;
            int left = j;
            int bottom = 2*n-i;
            int right = 2*n-j;

            cout<<min(min(top,bottom),min(left,right))<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++)
    {
        int n;
        cin>>n;
        patt_22(n);
    }
    return 0;

}