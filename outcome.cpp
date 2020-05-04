#include <iostream>
#include "outcome.h"
using namespace std;
void Outcome::load_out() {
    cout<<"Set category:"<<endl;
    cin>>category;
    cout<<"Set name:"<<endl;
    cin>>info;
    cout<<"Set value:"<<endl;
    cin>>value;
}
void Outcome::show_out() {
    cout<<"Category:"<<category<<endl;
    cout<<"Name:"<<info<<endl;
    cout<<"Value:"<<value<<endl;
}
Outcome::Outcome(string x,string y, double z){
    category=x;
    info=y;
    value=z;
}
Outcome::~Outcome() {}