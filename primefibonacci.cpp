#include<iostream>
#include<conio.h>

using namespace std;

int prime(int n)
{
    int count = 0;
    for(int i = 1; i<= n; i++)
    {
          if(n%i == 0){count++;}
    }
    if(count == 2){return 1;}
    else{return 0;}
}

int main()
{
    int a = 0;
    int b = 1;
    int fib = 0;
    cout<<"The prime-fibonacci-series from 1 to 1000 are:"<<endl;
    while(fib<1000)
    {
            if(prime(fib) == 1)
            cout<<fib<<endl;
            fib = a + b;
            a = b;
            b = fib;
    }
    getch();
    return 0;
}
