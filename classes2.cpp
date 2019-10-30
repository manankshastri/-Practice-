#include<iostream>

using namespace std;

class Cats{
    
    string name;
    string breed;
    int age;
    
    public:
        Cats();
        void setName(string name);
        void setBreed(string breed);
        void setAge(int age);
        string getName();
        string getBreed();
        int getAge();
        void printInfo();
};

Cats::Cats(){
    
    cout<<"Assigning initial values: "<<endl;
    name = "unk";
    breed = "unk1";
    age = 123;
}

void Cats::setName(string nameIn){
    name = nameIn;   
}

void Cats::setBreed(string breedIn){
    breed = breedIn;   
}

void Cats::setAge(int ageIn){
    age = ageIn;   
}

void Cats::printInfo(){
    cout<<name<<" "<<breed<<" "<<age<<"\n";
}

string Cats::getName(){
    return name;
}

string Cats::getBreed(){
    return breed;
}

int Cats::getAge(){
    return age;
}


int main(){
    
    Cats cats1;
    cout<<"Cat1 information: ";
    cats1.printInfo();
    return 0;
}