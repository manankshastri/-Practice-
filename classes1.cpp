#include<iostream>
using namespace std;

class Student {
    
    string name;
    int id;
    int gradDate;
  
    public:
        void setName(string name);
        void setId(int id);
        void setGradDate(int gradDate);
        string getName();
        int getId();
        int getGradDate();
        void print();
};

void Student :: setName(string nameIn){
    name = nameIn;
}

void Student :: setId(int idIn){
    id = idIn;
}

void Student :: setGradDate(int gradDateIn){
    gradDate = gradDateIn;
}

void Student :: print(){
    cout<<name<<" "<<id<<" "<<gradDate<<"\n";
}

string Student :: getName(){
    return name;
}

int Student :: getId(){
    return id;
}

int Student :: getGradDate(){
    return gradDate;
}

int main(){
    
    Student student1;
    
    int integer1 = 4;
    float float1 = 4.333;
    
    student1.setName("Catherine");
    student1.setId(12312);
    student1.setGradDate(2017);
    
    cout<<"integer1: "<<integer1<<"\n";
    cout<<"float1: "<<float1<<"\n";
    
    cout<<"Student information: \n";
    student1.print();
    
    return 0;
}