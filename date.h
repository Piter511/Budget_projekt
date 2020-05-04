#ifndef BUDGET_DATE_H
#define BUDGET_DATE_H
#include <iostream>
using namespace std;
class Date{
    int day;
    int month;
    int year;
public:
    friend class Item;
    Date(int=0,int=0,int=0);
    ~Date();
    void load_date();
    void show_date();
    static void current_date();
    string month_full_name(int month);
    static int getcurrentMonth();
    static int getcurrentDay();
    static int getcurrentYear();
    int getMonth();
    int getDay();
    int getYear();

};
#endif
