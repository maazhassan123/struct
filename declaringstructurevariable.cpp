#include <iostream>
using namespace std;
struct motor{//there can be any name like maaz any other
    int id;
    double speed;
    string brand;
};


int main() {
    motor p,q,r,r1;
    //1.using 'p ': Manual assignment.
    p.id=101;
    p.speed=1500;
    p.brand="ElectricCO";

    //2.using 'q ': Copying 'p' into 'q'
    // This copies all values from p into q at once
    q=p;
    q.id=102;// we updated the id so it's unique.

    //3.Using 'r':Direct assignment
    
    r1.brand="maaz";
    r.id=103;
    r.speed=3000;
    r.brand="Power max";

    cout<<"Motor P:Id="<<p.id<<" ,Speed ="<<p.speed<<" , Brand= "<<p.brand<<endl;
    cout<<"MOtor Q: Id="<<q.id<<",Speed="<<q.speed<<",brand="<<q.brand<<endl;
    cout<<"Motor R: ID="<<r.id<<",Speed= "<<r.speed<<" ,brand= "<<r.brand<<endl;
    return 0;
}