#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    int n = 0,k = 0,p = 0,num;
    int s = 0;
    cout<<"Enter the number to check if its a magic no. or not: ";
    cin>>num;
    n = num;
    while(n>9)
    {
                 k = n;
                 while(k>0)
                 {
                           p = k%10;
                           s = s+p;
                           k=k/10;
                 } 
                 n = s;
 }
    if(n == 1)
          cout<<num<<"is a magic number!";
    else
          cout<<num<<"is not a magic number";
    getch();
    return 0;
}    
