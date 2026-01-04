#include <iostream>
using namespace std;
struct maaz{
    string name;
    long long id;
    int age;
    char grade;


};

int main() {
    maaz *m,*ptr;
    (*m).name="Maaz hassan";
    (*m).age=18;
    (*m).id=3610303972197;
    (*m).grade='A';
      
    *ptr=*m;
    (*ptr).name="Abdullah masood";
    (*ptr).id=32344151313215;
     
    cout<<"Name: "<<(*m).name<<" , Id: "<<(*m).id<<" ,  Age: "<<(*ptr).age<<endl<<endl;
    cout<<"Name: "<<(*ptr).name<<" , Id: "<<(*ptr).id<<" ,  Age: "<<(*ptr).age<<endl<<endl;

    return 0;
}