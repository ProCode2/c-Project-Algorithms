#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
    int len =0;
    int bred =0;
    cout<<"Enter the length and bread of your matrices:"<<endl;
    cin>>len>>bred;
    int a[len][bred], b[len][bred];
     int sum[len][bred];
    cout<<"Enter the first matrix"<<endl;
    for(int i = 0; i<len ; i++)
    {
          for(int j = 0; j<bred ; j++) 
          {
                  cin>>a[i][j];
          }
    } 
    cout<<"Enter the second matrix"<<endl;
    for(int i = 0; i<len ; i++)
    {
          for(int j = 0; j<bred ; j++) 
          {
                  cin>>b[i][j];
          }
    } 
    
    
    
    for(int i = 0; i<len ; i++)
    {
          for(int j = 0; j<bred ; j++) 
          {
                  sum[i][j] = a[i][j] + b[i][j];
          }
    } 
    cout<<"The sum os the matrices are:"<<endl;
    for(int i = 0; i<len ; i++)
    {
          for(int j = 0; j<bred ; j++) 
          {
                  cout<<sum[i][j]<<" ";
          }
          cout<<endl;
    } 
    
    getch();
    return 0;
}
