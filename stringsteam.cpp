#include<iostream>
#include<string>
#include<sstream>

int main(){
    std::string length1, width1;
    float length2 = 0;
    float width2 = 0;
    float area = 0;
    
    std::cout<<"Length: ";
    std::getline(std::cin, length1);
    std::stringstream(length1) >> length2;
    std::cout<<"Width: ";
    std::getline(std::cin, width1);
    std::stringstream(width1) >> width2;
    area = length2 * width2;
    std::cout<<"Area: "<<area;
    return 0;
}