#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int len = 0; int num; int ar1[len-1]; int spos=0;
    cout<<"Enter the length of your array"<<endl;
    cin>>len;
    int ar[len];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0 ; i < len ; i++)
            cin>>ar[i];
    cout<<"What do you want to delete?"<<endl;
    cin>>num;
    for(int i = 0 ; i < len ; i++)
    {
            if(ar[i] == num)
            {
             continue;
             }
            else
            {
            ar1[spos] = ar[i];
            spos++;
            }
    }
    cout<<"The new array is:"<<endl;
    for(int i = 0 ; i < sizeof(ar1); i++)
            cout<<ar1[i];
    getch();
    return 0;
}
