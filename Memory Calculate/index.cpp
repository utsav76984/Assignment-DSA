#include<iostream>
#include<vector>
#include<string>

using namespace std;

class student{
    
    public:

    int id;
    string name;

    // Constructor

    student(int id, string name){

        this->id = id;
        this->name = name;

    }

     // Display student info

     void display(){

       cout << "ID: " << id << ", Name: " << name << endl;
     }
};


class studentlist{

    public:
    vector<student> list;

    void addStudent(){
        int id;
        string name;


        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name; 
        student std(id, name);
        list.push_back(std);
        cout << "Student added successfully." << endl;
    }
};


  void displayStudents(){
    cout<<"=========student list==========="<<endl;

     for (student s : list) {
            s.display();
        }
  };

  void removestudent(){
    int id;
    cout<<""<<endl;
  }

int main(){

     studentlist list;
     int choice =-1;
}
