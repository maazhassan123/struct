#include <iostream>
using namespace std;
struct dimensions{
    int length,width,height;
    //constructor
    dimensions(int l=1,int w=1,int h=1){
        
        length=l;width=w;height=h;// these are fixed values if you miss anything in argument in main then these values will be passed
    }
};

int main() {
    dimensions box4(12,6,3); //create a box with all dimensions given.
    dimensions box5(12,6); //create a box using default value for height
    dimensions box6; //create a box using all default values

    cout<<"Length:"<<box4.length<<" ,  Width: "<<box4.width<<" ,  Height:"<<box4.height<<endl;
   cout<<"Length:"<<box5.length<<" ,  Width: "<<box5.width<<" ,  Height:"<<box5.height<<endl;
   cout<<"Length:"<<box6.length<<" ,  Width: "<<box6.width<<" ,  Height:"<<box6.height<<endl;
    return 0;
}