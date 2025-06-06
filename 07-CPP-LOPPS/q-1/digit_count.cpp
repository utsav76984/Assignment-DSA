#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter num ";
    cin >> num;
    int count=0;

    while (num >0)
    {
        num=num/10;
        count ++;
    }
     cout<<"enter count"<<count;
    return 0;
   
}








