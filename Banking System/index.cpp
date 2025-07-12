#include<iostream>
#include<string>
using namespace std;


class BankAccount{
    private:
    string Accountholdername ;
    long long int accountnumber;
    double balance = 5000;

    public:
    void deposite(double amt){
        if(amt>0)
        {
            balance += amt;
            cout << "Deposited succesfully" << endl;
        }else{
            cout << "Invalid deposit amount!" << endl;
        }
    }

    double getBalance(){
        return balance;
    }

    void withdrawal(double amt){
        if(amt<=balance)
        {
            balance -= amt;
            cout << "withdrawal succesfully" << endl;
        }else{
            cout << "Insufficient Balance!" << endl;
        }
    }
    void Displayinfo(){
        cout << "********Account Information**********" << endl;
        cout << "Account number : " << accountnumber << endl;
        cout << "Account Holder Name : " << Accountholdername << endl;
        cout << "Your Balance is : " << balance << endl;
    }

     void setAccountDetails(long long int acNo, string name ,double bal) {
        accountnumber = acNo;
        Accountholdername = name;
        balance = (bal >= 0) ? bal : 0;
    }
    
};

class sevingaccount :public BankAccount{

    public:

    double Interestrate;

    void CalculateInterest(){

        
        double Interest = getBalance() * Interestrate / 100;
        cout<<"total simple interet is:"<<Interest;
   
    }

};

class  CheckingAccount: public BankAccount{

    public:

    double overlimit;

    void checkOverdraft(double amount){
        if (amount >getBalance() + overlimit)
        {
             cout << "Amount exceeds overdraft limit" << endl;
        }
        else{
           cout << "Overdraft OK. Proceeding with withdrawal." << endl;
        }
        
    }

};

class FixedDepositeAccount  :public BankAccount{

         public:

    void calculateInterest(int time){
        float rate = 8.5;
        cout << "Fixed Deposite Interest: " << (getBalance()* rate * time) / (12 * 100) << endl;
    }
};


int main(){


    sevingaccount sa;
    sa.setAccountDetails(2020, "pratik", 50000);
    // sa.interestRate = 4.75

    CheckingAccount ca;
    ca.setAccountDetails(2025, "dharmik", 35000);

    FixedDepositeAccount std;
    std.setAccountDetails(2028, "parth", 40000);

    int choice= -1, amount,in=-1;



    while (choice !=0)
    {
        cout<<"_________**************___________"<<endl;
        cout<<"entet 1 to access saving account"<<endl;
        cout<<"enter 2 to access cheking account"<<endl;
        cout<<"enter 3 to access fixed deposite"<<endl;
        cout<<"enter 0 to exit"<<endl;
        cout<<"**********************";
        cout<<"enter your choice"<<endl;
        cin >>choice;

        if (choice == 1)
        {
            while (in != 0)
            {
                cout<<"******************************"<<endl;
                cout<<"Enter 1 to check balance"<<endl;
                cout<<"enter 2 to withdraw"<<endl;
                cout<<"enter 3 to deposit"<<endl;
                cout << "Enter 4 to calculate Fixed interest" << endl;
                cout << "Enter 5 to see profile" << endl;
                cout<<"*******************************"<<endl;
                cout<<"enter choice"<<endl;
                cin >> in;

                switch (in)
                {
                case 1:
                    cout << "Your Balance: " << sa.getBalance() << endl;
                    break;

               case 2:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        sa.withdrawal(amount);
                        break;
                    case 3:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        sa.deposite(amount);
                        break;
                    case 4:
                        sa.CalculateInterest();
                        break;
                    case 5:
                        sa.Displayinfo();
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                    break;
                }
                
            }     
                in = -1;   
        }  

        else if(choice == 2){

            while (in !=0 )
            {
                cout<<"=========================="<<endl;
                cout << "Enter 1 to check balance" << endl;
                cout << "Enter 2 to withdraw" << endl;
                cout << "Enter 3 to deposit" << endl;
                cout << "Enter 4 to see profile" << endl;
                cout << "=======================" << endl;
                cout << "Enter your choice: ";
                cin >> in;

                switch (in)
                {
               case 1:
                        cout << "Your Balance: " << ca.getBalance() << endl;
                        break;
                    case 2:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        ca.checkOverdraft(amount);
                        break;
                    case 3:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        ca.deposite(amount);
                        break;
                    case 4:
                        ca.Displayinfo();
                        break;
                    default:
                           cout << "Invalid choice...!" << endl;
                
                    break;
                }
            }
            in = -1;
        }

        else if(choice == 3){
            while (in != 0)
            {
                cout<<"*********************"<<endl;
                cout<<"enter 1 to check balance"<<endl;
                cout<<"enter 2 to withdraw"<<endl;
                cout << "Enter 3 to deposit" << endl;
                cout << "Enter 4 to calculate interest" << endl;
                cout << "Enter 5 to see profile" << endl;
                cout << "=========================" << endl;
                cout << "Enter your choice: ";
                cin >> in;

                switch (in) {
                    case 1:
                        cout << "Your Balance: " << std.getBalance() << endl;
                        break;
                    case 2:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        std.withdrawal(amount);
                        break;
                    case 3:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        std.deposite(amount);
                        break;
                    case 4:
                        int time;
                        cout << "Enter time (in months): ";
                        cin >> time;
                        std.calculateInterest(time);
                        break;
                    case 5:
                        std.Displayinfo();
                        break;
                    default:
                           cout << "Invalid choice...!" << endl;
                }
            }
            in = -1;
        }

         else{
            cout << "Not available...!";
        }
    }
    
    return 0;
}