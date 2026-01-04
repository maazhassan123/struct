#include <iostream>
using namespace std;
struct studentinfo{
    string name;
    int age;
    long long cnic;
};

int main() {
    studentinfo s1{"M",18,3610303972197};//you can write any word instead of s1
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"CNIC: "<<s1.cnic<<endl;
    return 0;
}