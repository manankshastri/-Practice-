#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<numeric>
#include<math.h>

class Animal{
    
    private:
        std::string name;
        double height;
        double weight;
    
        static int numOfAnimals;
    
    public:
        std::string GetName(){return name;}
        void SetName(std::string name){this->name = name;}
        double GetHeight(){return height;}
        void SetHeight(double height){this->height = height;}
        double GetWeight(){return weight;}
        void SetWeight(double weight){this->weight = weight;}    
        
        void SetAll(std::string, double, double);
        Animal(std::string, double, double);
        Animal();
        ~Animal();
        static int GetNumOfAnimals(){return numOfAnimals;}
    
        void ToString();
};

int Animal::numOfAnimals = 0;
void Animal::SetAll(std::string name, double height, double weight){
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal(std::string name, double height, double weight){
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal(){
    this->name = "";
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal(){
    std::cout<<"\nAnimal "<<this->name<<" destroyed\n";
}

void Animal::ToString(){
    std::cout<<"Name: "<<this->name<<" Height: "<<this->height<<" cm Weight: "<<this->weight<<" kg\n";
}


class Dog: public Animal{
    private:
        std::string sound = "woof";
    
    public:
        void makeSound(){
            std::cout<<"Dog "<<this->GetName()<<" says"<<this->sound<<" \n";
        }
        Dog(std::string, double, double, std::string);
        Dog():Animal(){};
        void ToString();
};

Dog::Dog(std::string name, double height, double weight, std::string sound) : Animal(name, height, weight){
    this->sound = sound;
}

void Dog::ToString(){
    std::cout<<"Name: "<<this->GetName()<<" Height: "<<this->GetHeight()<<" cm Weight: "<<this->GetWeight()<<" kg Sound: "<<this->sound<<"\n";
}


int main(){
    Animal fred;
    fred.ToString();
    fred.SetName("Fred");
    fred.SetWeight(80);
    fred.SetHeight(90);
    fred.ToString();
    Animal tom("Tom", 90, 190);
    tom.ToString();
    
    Dog spot("Spot", 38, 16, "woooooof");
    spot.ToString();
    
    std::cout<<"Number of Animals: "<<Animal::GetNumOfAnimals()<<"\n";
    return 0;    
}