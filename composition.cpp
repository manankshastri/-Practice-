#include<iostream>

class Birthday{
  private:
    int month;
    int day;
    int year;

  public:
    Birthday(int m, int d, int y): month(m), day(d), year(y){}
    void printDate(){
      std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;
    }
};


class Person{
  private:
    std::string name;
    Birthday bd;

  public:
    Person(std::string n, Birthday b): name(n), bd(b){}
    void printInfo(){
      std::cout<<name<<std::endl;
      bd.printDate();
    }
};


int main(){
  Birthday bd(7, 31, 1995);
  Person p("Manank", bd);
  p.printInfo();
  return 0;
}
