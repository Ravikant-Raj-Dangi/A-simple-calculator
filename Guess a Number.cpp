#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a;
    int b=rand()%10+1;
    cout<<"Guess and enter a number:"<<endl;
    cin>>a; 
if(a<1){
    cout<<"You have entered a very small number"<<endl;
}
else
if(a>10){
    cout<<"You have entered a very large number"<<endl;
}
else{
    cout<<" Random number printed by system:"<<endl;
cout<<b<<endl;
if(b==a)
{
    cout<<"You guess a correct number"<<endl;
}
else{
    cout<<"You guess a wrong number, try again";
}
}
    return 0;
}
