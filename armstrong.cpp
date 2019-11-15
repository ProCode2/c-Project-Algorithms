#include<iostream>
#include<conio.h>

using namespace std;

int isArmstrong(int n)
{
     int sum = 0;
     int copyn = n;
     int p = 0;
     while(copyn > 0)
     {
                 p = copyn % 10;
                 sum = sum + p*p*p;
                 copyn = copyn/10;
     }
     if(n == sum)
          return 1;
     else
         return 0;
}

int main()
{
    cout<<"The armstrong nu,bers between 1 to 1000 are:"<<endl; 
    for(int i = 1;i<1000;i++)
    {   
        if(isArmstrong(i) == 1)
        cout<<i<<endl; 
    }
    getch();
    return 0;
}
     
