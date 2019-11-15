#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int len = 0; int num; int pos; int ar1[len+1]; int spos=0;
    cout<<"Enter the array length";
    cin>>len;
    int ar[len];
    for(int i = 0;i<len;i++)
            cin>>ar[i];
    cout<<"Enter the number to be inserted";
    cin>>num;
    cout<<"Where do i add it?(the position)";
    cin>>pos;
    for(int i = 0; i < len+1; i++)
    {
            if(i == pos-1)
            {
                 ar1[spos] = num;
                 spos++;
            }
            ar1[spos] = ar[i];
            spos++;
    }
    cout<<"The new array is: "<<endl;
    for(int i = 0 ; i < len+1 ; i++)
    cout<<ar1[i];
    getch();
    return 0;
}       
            
