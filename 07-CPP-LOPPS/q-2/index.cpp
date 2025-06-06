#include<iostream>

using namespace std;

int main(){

    int num, first_digit,last_digit;
    int sum=0;
    cout <<"enter number";
    cin >>num;

    last_digit=num%10;
    while (num >=10)
    {
        num=num/10;

    }   

    first_digit=num;
    sum=first_digit+last_digit;
    cout<<sum;
    
    return 0;

}
