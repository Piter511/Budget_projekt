#include <iostream>
#include <cstdlib>
#include <vector>
#include "item.h"
using namespace std;
void fill(vector<Item>&);//fill in income information and value
void show(vector<Item>&);//show all source of incomes
void remove(vector<Item>&);//remove mistake
double sum(vector<Item>&);//sum of income
vector<Item> filtered_items(vector<Item>&,int cd,int cm,int cy);
int main() {
    int cm=Date::getcurrentMonth(),cd=Date::getcurrentDay(),cy=Date::getcurrentYear();
    Date current_month_name;
    vector<Item> income;
    vector<Item> outcome;
    vector<Item> filtered_income;
    vector<Item> filtered_outcome;
    cout<<"Home budget "<<Date::getcurrentYear()<<endl;
    Date::current_date();
    int option;
   do{
       cout<<"---BUDGET---"<<endl;
       cout<<"1.Income."<<endl;
       cout<<"2.Outcome."<<endl;
       cout<<"3.Monthly sum up."<<endl;
       cout<<"4.History."<<endl;
       cout<<"5.Exit program."<<endl;
       cin>>option;
       switch(option) {
           case 1:
               //cout << "Your monthly income for "<<current_month_name.month_full_name(cm)<<" is: " << sum(income) << endl;
               int option1;
               do {
                   cout << "1.Add income." << endl;
                   cout << "2.Show income." << endl;
                   cout << "3.Remove income." << endl;
                   cout << "4.Quit." << endl;
                   cin >> option1;
                   switch (option1) {
                       case 1:
                           fill(income);
                           break;
                       case 2:
                           show(income);
                           break;
                       case 3:
                           remove(income);
                           break;
                       case 4:
                           break;
                   }
               } while (option1 != 4);
               break;
           case 2:
               //cout << "Your monthly outcome for "<<current_month_name.month_full_name(cm)<<" is "<< sum(outcome) << endl;
               int option2;
               do {
                   cout << "1.Add outcome." << endl;
                   cout << "2.Remove outcome." << endl;
                   cout << "3.Sum up." << endl;
                   cout << "4.Quit." << endl;
                   cin >> option2;
                   switch (option2) {
                       case 1:
                           //income.fill();
                           break;
                       case 2:
                           show(income);
                           break;
                       case 3:
                           remove(income);
                           break;
                       case 4:
                           break;
                   }
               } while (option1 != 4);
               break;
           case 3:
               filtered_income=filtered_items(income,cd,cm,cy);
               filtered_outcome=filtered_items(outcome,cd,cm,cy);
               cout << "Current month:" <<current_month_name.month_full_name(cm)<<endl;
               cout << "Income: " <<sum(filtered_income)<< endl;
               cout << "Outcome: " << sum(filtered_outcome) << endl;
               cout << "Total in "<<current_month_name.month_full_name(cm)<<": " << sum(filtered_income) - sum(filtered_outcome) << endl;
               break;
           case 4:
               /*int option4;
               do {
                   cout << "1.Add income." << endl;
                   cout << "2.Show income." << endl;
                   cout << "3.Remove income." << endl;
                   cout << "4.Quit." << endl;
                   cin >> option4;
                   switch (option4) {
                       case 1:
                           fill(income);
                           break;
                       case 2:
                           show(income);
                           break;
                       case 3:
                           remove(income);
                           break;
                       case 4:
                           break;
                   }
               } while (option4 != 4);*/
               break;
           case 5:
               break;
       }
   }while(option!=5);
    getchar();
    system("PAUSE");
    return 0;
}
void fill(vector<Item>& Items){
    string info,cat;
    double value;
    int x,d,m,y;//number of items
    Item newItem(cat,info,value,d,m,y);
    cout<<"How many items do you want add?"<<endl;
    cin>>x;
    for(int i=0;i<x;i++) {
        newItem.load_in();
        Items.push_back(newItem);
    }
}
void show(vector<Item>& cash){
    unsigned int size=cash.size();
    for(unsigned int i=0;i<size;i++){
        cout<<"***Item number #"<<i+1<<"***"<<endl;
        cash[i].show_in();
    }
}
void remove(vector<Item>& cash){
    int x;
    cout<<"Which one item do you want remove?"<<endl;cin>>x;
    cash.erase(cash.begin()+x-1);
    unsigned int size=cash.size();
    for(unsigned int i=0;i<size;i++){
        cout<<"***Item number #"<<i+1<<"***"<<endl;
        cash[i].show_in();
    }
}
double sum(vector<Item>& cash){
    unsigned int size=cash.size();
    double x[size],sum_of_total_items=0;
    for(unsigned int i=0;i<size;i++){
        x[i]=cash[i].getVaule();
        sum_of_total_items+=x[i];
    }
    return sum_of_total_items;
}
vector<Item> filtered_items(vector<Item>& items,int cd,int cm,int cy){
    vector<Item> after_filtered;
    unsigned int size=items.size();
    string info,cat;
    double value;
    int d,m,y;
    Item itm(cat,info,value,d,m,y);
    Item Filtered_item(cat,info,value,d,m,y);
    for(int i=0;i<size;i++){
        if(items[i].getYear()==cy){
            if(items[i].getMonth()==cm){
                if(items[i].getDay()<=cd){
                    after_filtered.push_back(items[i]);
                }
            }
        }
    }
    return vector<Item>(after_filtered);
}