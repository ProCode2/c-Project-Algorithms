#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int sum = 0, n;
    cout<<"Enter the number to check if it is perfect number or not: ";
    cin>>n;
    for(int i = 1;i<n;i++)
    {
            if(n % i == 0)
            sum = sum + i;
    }
    if(sum == n)
    cout<<n<<" is a perfect number.";
    else
    cout<<n<<" is not a perfect number.";
    getch();
    return 0;
}
           
