#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    if(c>=65&& c<=90){
        cout<<"The character is an capital letter."<<endl;
    }
    else if(c>=97 && c<=122){
        cout<<"The character is a smallcase letter."<<endl;
    }
    else if(c>=48 && c<=57){
        cout<<"The character is a digit."<<endl;
    }
    else if((c>=0 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=127))
    {
        cout<<"The character is a special character."<<endl;
    }
    else{
        cout<<"Other character."<<endl;
    }
}