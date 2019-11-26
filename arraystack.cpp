#include <iostream>
#include <conio.h>
using namespace std;

class stack
{
          int top;int lastelem,len;
          int ar[100];
 
  public:
          stack(int leng)
          {
           len = leng;
           top = -1;
          }
         void push(int element)
         {
          if(top>len){cout<<"Stack overloading!!";}
          else{
          top=top +1;
          ar[top] = element;
          }
         }
         int pop()
         {
             if(top<=0){cout<<"Stack underloading!!";}
             else{
             top=top-1;
             lastelem = ar[top];
             return lastelem;
             }
         }
        void display(){
             cout<<"you current stack status:"<<endl;
             for(int i=0; i<=top; i++)cout<<ar[i]<<" "; 
             cout<<endl;                 
}
};

int main()
{
    stack a(5);
    a.push(5);
    a.push(6);
    a.push(8);
    a.pop();
    a.display();
    getch();
    return 0;
}
