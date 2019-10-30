#include<iostream>

class MyClass {
  private:
    int var;

  public:
    MyClass(int a) : var(a) {}
    void printInfo(){
      std::cout<<var<<std::endl;
      std::cout<<this->var<<std::endl;
      std::cout<<(*this).var<<std::endl;
    }
};

int main(){
  MyClass obj(42);
  obj.printInfo();
  return 0;
}
