#include <iostream>
using namespace std;
struct motor {
    string name;
    long long id;
    int age;
    char grade;
};
int main() {
    motor m[25];
    m[0].name="Maaz hassan.";
    m[0].id=3610303972197;
    m[0].age=18;
    m[0].grade='A';

    m[1]=m[0];
    m[1].name="Faraz ahmed.";
    m[1].id=3456789123;


    cout<<"Name: "<<m[0].name<<",  Id= "<<m[0].id<<" ,   Age: "<<m[0].age<<" ,   Grade: "<<m[0].grade<<endl<<endl;
    cout<<"Name: "<<m[1].name<<",  Id= "<<m[1].id<<" ,   Age: "<<m[1].age<<" ,   Grade: "<<m[1].grade<<endl;
    return 0;
}