#include <iostream>
#include <ctime>
#include "date.h"
using namespace std;
int Date::getcurrentMonth(){
    time_t t=time(0);
    tm* now=localtime(&t);
    return now->tm_mon+1;
}
int Date::getcurrentDay(){
    time_t t=time(0);
    tm* now=localtime(&t);
    return now->tm_mday+1;
}
int Date::getcurrentYear(){
    time_t t=time(0);
    tm* now=localtime(&t);
    return now->tm_year+1900;
}
int Date::getMonth(){
    return month;
}
int Date::getDay(){
    return day;
}
int Date::getYear(){
    return year;
}
void Date::current_date(){
    time_t t=time(0);
    tm* now=localtime(&t);
    cout<<"Date: "<<(now->tm_mday)<<"-"<<(now->tm_mon+1)<<"-"<<(now->tm_year+1900)<<"\n";
}
void Date::load_date(){
    cout<<"Enter date(dd-mm-yyyy): "<<endl;
    cout<<"Day:";
    cin>>day;
    cout<<"Month:";
    cin>>month;
    cout<<"Year:";
    cin>>year;
}
string Date::month_full_name(int m){
    string eine_monate;
    if(m==1) eine_monate="February";
    if(m==2) eine_monate="January";
    if(m==3) eine_monate="March";
    if(m==4) eine_monate="April";
    if(m==5) eine_monate="May";
    if(m==6) eine_monate="June";
    if(m==7) eine_monate="July";
    if(m==8) eine_monate="August";
    if(m==9) eine_monate="September";
    if(m==10) eine_monate="October";
    if(m==11) eine_monate="November";
    if(m==12) eine_monate="December";
    return eine_monate;
}
void Date::show_date(){
    cout<<"Date of income:"<<day<<"-"<<month<<"-"<<year<<endl;
}
Date::Date(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
}
Date::~Date(){}
