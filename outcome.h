#ifndef BUDGET_OUTCOME_H
#define BUDGET_OUTCOME_H
#include <iostream>
#include <string>
using namespace std;
class Outcome {
    string category;
    string info;
    double value;
public:
    void load_out();
    void show_out();
    Outcome(string,string,double);
    ~Outcome();
};


#endif
