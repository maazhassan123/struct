#include <iostream>
using namespace std;
struct student{
    int age;
    string name;
};
int main() {
    student *students=new student[34];
    students[0].name="maaz";
    cout<<students[0].name;
    

    return 0;
}