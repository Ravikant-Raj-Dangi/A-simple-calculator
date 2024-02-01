#include<iostream>
using namespace std;
int main(){
float a,b,sum,sub,mult,div;
char operato;
cout<<"Enter first number:";
cin>>a;
cout<<"Choose an operation to be performed (+,-,*,/):";
cin>>operato;
cout<<"Enter second number:";
cin>>b;
sum=a+b;
sub=a-b;
mult=a*b;
div=a/b;
switch(operato)
{
    case '+':
    cout<<"Result="<<sum;
    break;
    case '-':
    cout<<"Result="<<sub;
    break;
    case '*':
    cout<<"Result="<<mult;
    break;
    case '/':
    cout<<"Result="<<div;
    break;
    default:
    cout<<"Invalid operation";
    break;
  }
return 0;
}