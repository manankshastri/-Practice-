#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[10];
    int temp;
    
    std::cout<<"Enter the array: ";
    for(int i = 0; i <10; i++)
    {
        std::cin>>userInput[i];
    }
    
    std::cout<<"\nOriginal Array: ";
    for(int i = 0; i <10; i++)
    {
        std::cout<<userInput[i]<<" ";
    }
    
    std::cout<<"\nReverse Order: ";
    for(int i = 9; i>=0; i--)
    {
        std::cout<<userInput[i]<<" ";
    }
 
    // sorting the array - ascending order
    for (int i = 0; i<10 ; i++){
        for(int j=0;j<=9-i;j++){
            if(userInput[j] > userInput[j+1]){
                temp = userInput[j];
                userInput[j] = userInput[j+1];
                userInput[j+1] = temp;
            }
            
        }
    }
    
    std::cout<<"\nAfter sorting: ";
    for(int i=0;i<10;i++){
        std::cout<<userInput[i]<<" ";
    }
    return 0;
}