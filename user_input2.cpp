#include<iostream>
#include<string>

int main()
{
    std::string userName; 
    std::cout<<"Tell me your nickname?";
    std::getline(std::cin, userName);
    std::cout<<"\nHello "<<userName<<"\n";
    return 0;
}