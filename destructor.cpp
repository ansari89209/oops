#include<iostream>
using namespace std;

//destructor fuction is called when an object is deleted
// cannot pass any parameter

class Rectangle{
    public:
        int l;
        int b;
    
    // Default Constructor
    Rectangle(){
        l=0;
        b=0;
    }
    // Parameterized Constructor
    Rectangle(int x , int y){
        l=x;
        b=y;
    }
    // Copy Constructor
    Rectangle(Rectangle &r){
        l=r.l;
        b=r.b;
    }

    //Destructor
    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
    
};
int main(){
    Rectangle r1;
    cout<<"Length is: "<<r1.l<<" ,Breadth is: "<<r1.b<<endl;

    Rectangle r2(3,4);
    cout<<"Length is: "<<r2.l<<" ,Breadth is: "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<"Length is: "<<r3.l<<" ,Breadth is: "<<r3.b<<endl;
}