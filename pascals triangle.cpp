//Pascal's Triangle

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of rows of the Pascasl's triangle: ";
    cin>>n;
          
for (int line = 1; line <= n; line++) 
{ 
    int C = 1; // used to represent C(line, i) 
    for (int i = 1; i <= line; i++)  
    { 
          
        // The first value in a line is always 1 
        cout<< C<<" ";  
        C = C * (line - i) / i;  
    } 
    cout<<"\n"; 
} 
    getch();
    return 0;
}
