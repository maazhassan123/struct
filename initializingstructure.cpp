#include <iostream>
using namespace std;
struct dimensions{
    int length,width,height;
};

int main() {
    dimensions box={12,6,3};//box is just a word given to first there can be any word
    cout<<"Length: "<<box.length<<endl;
    cout<<"Width: "<<box.width<<endl;
    cout<<"Height:"<<box.height<<endl;


    return 0;
}