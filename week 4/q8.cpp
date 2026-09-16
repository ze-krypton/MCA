#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check: ";
    cin>>n;
    int digits=0;
    int temp=n;
    while(temp!=0){
        temp/=10;
        digits++;
    }
    double res=0;
    temp=n;
    while(temp!=0){
        res+=pow(temp%10,digits);
        temp/=10;
    }
    int y=(int)res;
    if(y==n){
        cout<<n<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<n<<" is not an Armstrong number."<<endl;
    }
    return 0;
}