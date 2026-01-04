#include<iostream>
#include<iomanip>

using namespace std;
struct student{
        string name;
        long long cnic;
        int age;
        bool masturbate;
    };
int main() {
    student stu[5];
    for(int i=0;i<2;i++){
        cout<<"Enter the name of student "<<i+1<<": ";
        cin>>stu[i].name;
        cout<<"Enter the cnIc of student "<<i+1<<": ";
        cin>>stu[i].cnic;
        cout<<"Enter the age of the student: "<<i+1<<": ";
        cin>>stu[i].age;
        cout<<"Enter wether the student masturbate or not(true,false)"<<i+1<<": ";
        cin>>stu[i].masturbate;
    }
   
        cout<<left<<setw(8)<<"Sr no:"<<setw(8)<<"Name"<<setw(20)<<"CNIC"<<setw(8)<<"Age: "<<setw(8)<<"Masturbate"<<endl;
        cout<<string(48,'-')<<endl;
    
    for(int i=0;i<2;i++){
        cout<<left<<setw(8)<<i+1<<setw(8)<<stu[i].name<<setw(20)<<stu[i].cnic<<setw(8)<<stu[i].age;
        if(stu[i].masturbate){
            cout<<setw(8)<<"YE to hai hi mutthal."<<endl;
        }
        else{
            cout<<setw(8)<<"ye bhi muthal hi hai"<<endl;
        }
    }
    

    

    return 0;
}