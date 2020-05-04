#include "item.h"
#include <iostream>
#include <vector>
using namespace std;
void Item::load_in(){
    cout<<"Set category:";
    cin>>category;
    cout<<"Make description:";
    cin>> info;
    cout<<"Set value:";
    cin>> value;
    Item::load_date();

}
void Item::show_in(){
    cout<<"Category: "<<category<<endl;
    cout<<"Description: "<<info<<endl;
    cout<<"Value: "<<value<<endl;
    Item::show_date();
}
void Item::fill(vector<Item>& Items){
    int x;
    Item newItem;
    cout<<"How many items do you want add?"<<endl;
    cin>>x;
    for(int i=0;i<x;i++) {
        newItem.load_in();
        Items.push_back(newItem);
    }
}
double const Item::getVaule(){
    return value;
}
Item::Item(string cat,string inf,double val,int d,int m,int y):Date(day,month,year){}
Item::~Item() {}
