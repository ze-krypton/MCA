#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no upto which prime number should be printed: "<<endl;
    cin>>n;
    cout<<"The prime numbers are: "<<endl;
    for(int i=2;i<=n;i++)
    {
        bool isPrime=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime)
        {
            cout<<i<<" ";
        }
    }

}