#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
    int choice;
    int len,swap,pos, min = 999999;
    cout<<"Enter the length of your array: ";
    cin>>len;
    int a[len];
    cout<<"Enter the array elements: "<<endl;
    for(int i = 0; i<len; i++)
    {
            cin>>a[i];
    }
    cout<<"Enter 1 insertion sort. \nEnter 2 for selection sort: ";
    cin>>choice;
    switch(choice)
    {
                  case 1:
                       {
                             for(int i = 0; i<len-1; i++)
                             {
                                     for(int j=i+1; j<len ; j++)
                                     {
                                             if(a[i] > a[j])
                                             {
                                                swap = a[i];
                                                a[i] = a[j];
                                                a[j] = swap;
                                             }
                                     }
                             }
                             break;
                       }
                  case 2:
                       {
                             for(int i = 0; i<len-1; i++)
                             {
                                     for(int j=i; j<len ; j++)
                                     {
                                             if(a[i]  < min)
                                             {pos = i;}
                                     }
                                     swap = a[i];
                                     a[i] = a[pos];
                                     a[pos] = swap;
                             }
                             break;
                       }
                  default:
                          cout<<"Wrong Input!";
                  }
                  for(int i = 0; i<len; i++)
                  {
                          cout<<a[i];
                  }
    getch();
    return 0;
}
                  
