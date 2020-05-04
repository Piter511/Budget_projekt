#ifndef BUDGET_ITEM_H
#define BUDGET_ITEM_H
#include <iostream>
#include <string>
#include <vector>
#include "date.h"
using namespace std;
class Item : public Date{
    string category;
    string info;
    double value;
public:
    Item(string="",string="",double=1,int=1,int=1,int=1);
    ~Item();
    void load_in();
    void show_in();
    void fill(vector<Item>&);
    double const getVaule();
};
#endif
