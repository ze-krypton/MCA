#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    cout<<"Enter the number of terms: ";
    int n;
    cin>>n;
    cout<<"Fibonacci series: ";
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
    }
    return 0;
}