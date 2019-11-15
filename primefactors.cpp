#include<iostream>
#include<conio.h>

using namespace std;

int prime(int n)
{
    int count = 0;
    for(int i = 2; i< n; i++)
    {
          if(n%i == 0){count++;}
    }
    if(count == 0){return 1;}
    else{return 0;}
}

int main()
{
    int n;
    cout<<" Enter the number you want to get the prime factors of";
    cin>>n;
    cout<<"THe prime factors of"<<n<<" are:"<<endl;
    for(int i = 1;i <= n ; i++)
    {
            if(n % i ==0)
            {
                        if(prime(i) == 1)
                        cout<<i<<endl;
            }
    }
    getch();
    return 0;
}
