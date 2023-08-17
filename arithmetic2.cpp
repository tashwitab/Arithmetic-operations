#include<iostream>
using namespace std;
int main()
{
    int n, i, a,  num=1;
    cout<<"Enter a number:";
    cin>>num;
    while(i<=10)
{
    cout<< num <<" X "<< i <<"=" <<num * i <<endl;
    ++i;
}
return 0;
}