#include <iostream>
using namespace std;
struct student{
    string name;
    double gpa;
    bool enrolled;//you can set default vlaue true to bool as well then you not need to explicitly described
    //variables in struct are called members

};

int main() {
    //struct= A structure that group related variables under one name
    //     structs can contain many different data types(string,varia
    //      bles in a struct are known as "members". members 
    //      can access with."clas member access operation" )
    student student1;
    student1.name= "spongebolb";
    student1.gpa=3.2;
    student1.enrolled=true;

    student student2;
    student2.name= "maaz";
    student2.gpa=2;
    student2.enrolled=true;

    student student3;
    student3.name="abdullah";
    student3.gpa=4;
    student3.enrolled=false;


    cout<<student1.name<<endl;
     cout<<student1.gpa<<endl;
      cout<<student1.enrolled<<endl;

       cout<<student2.name<<endl;
    cout<<student2.gpa<<endl;
    cout<<student2.enrolled<<endl;

    cout<<student3.name<<endl;
     cout<<student3.gpa<<endl;
      cout<<student3.enrolled<<endl;
    return 0;
}
