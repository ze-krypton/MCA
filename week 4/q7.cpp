#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a,b,c in ax^2+bx+c: ";
    cin>>a>>b>>c;
    int d=b*b-4*a*c;
    if(d>0){
        cout<<"Roots are real and distinct."<<endl;
        double root1=(-b+sqrt(d))/(2*a);
        double root2=(-b-sqrt(d))/(2*a);
        cout<<"Root1: "<<root1<< " Root2: "<< root2<<endl;
    }
    else if(d==0){
        cout<<"Roots are real and equal."<<endl;
        double root=(-b)/(2*a);
        cout<<"Root: "<<root<<endl;
    }
    else{
        cout<<"Roots are imaginary."<<endl;
    }
}