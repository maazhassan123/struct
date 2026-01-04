#include <iostream>
using namespace std;
struct motor{
    int age;
    string name;

};

int main() {
    int num;
    cin>>num;
    motor arr[num];
    motor *maaz=arr;
   for(int i=0;i<num;i++){
    cout<<"Enter the name of student: "<<i+1<<": ";
    cin>>(maaz+i)->name;
   }
   for(int i=0;i<4;i++){
    cout<<(maaz+i)->name<<endl;
   }
    
    

    return 0;
}