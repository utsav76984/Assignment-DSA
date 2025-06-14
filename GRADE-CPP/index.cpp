#include<iostream>

using namespace std;

int main(){

    int mark;

    cout<<"Enter Your Marks:";
    cin>> mark;


        char grade = (mark >=90) ? 'A':
        (mark >=80) ? 'B':
        (mark >=70) ? 'C':
        (mark >=50) ? 'D':
        (mark <=33) ? 'E': 'F' ;
                    
        cout<<"Your Grade is"<< grade;

        switch (grade)
        {
        case 'A': cout<<"enter agood work";
             break;
        
        case 'B': cout<<" Well Done";
            break;
        
        case 'C': cout<<"good job";
            break;
        
        case 'D': cout<<"enter agood work";
            break;
        
        case 'E': cout<<"enter agood work";
            break;
        
        default:
            cout<< "Invalid grade";
            break;
        }

        if (grade=='A'|| grade=='B' || grade=='C'|| grade=='D' || grade=='E'){

            cout<<" eligible for the next levl";
        }
        
           else{
        cout << "Please try again next time."<<endl;
       }

        return 0;
}