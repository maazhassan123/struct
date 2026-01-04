#include <iostream>
using namespace std;
struct personalinfo{
    string name,adress,city;

};
struct student{
    long long studentid;
    personalinfo dataa;
    short year;
    double gpa;
};

int main() {
    student s1;
    s1.dataa.name="Maaz hassan.";
    s1.dataa.city="Khanewal.";
    s1.dataa.adress="Gulberg town,House no 58";
    s1.studentid=3610303972197;
    s1.year=2025;
    s1.gpa=3.9;
    cout<<"------------------------------------"<<endl<<endl;
    cout<<"Name: "<<s1.dataa.name<<endl;
    cout<<"City: "<<s1.dataa.city<<endl;
    cout<<"Adress: "<<s1.dataa.adress<<endl;
    cout<<"Id: "<<s1.studentid<<endl;
    cout<<"Year:"<<s1.year<<endl;
    cout<<"Gpa: "<<s1.gpa<<endl;
      cout<<"------------------------------------"<<endl<<endl;
    
    
    
    
    return 0;
}