#include<iostream>
#include<string>

int main(){
    
    int searchKey = 0;
    int searchArray[10] = {1, 324, 234, 2, 543, 789, 0, 987, 12, 1};
    int location = 0;
    
    while(1){
        
        std::cout<<"\nEnter the integer (-1 to quit): ";
        std::cin>>searchKey;
        if(searchKey == -1){
            break;
        }
        
        for(int i=0;i<10;i++){
            
            if (searchKey == searchArray[i]){
                location = i;
                break;
            }
            
            location = -1;
        }
        
        if (location != -1){
            std::cout<<"The "<<searchKey<<" is at location "<<location<<"\n";
        }
        else{
            std::cout<<"The "<<searchKey<<" is not in the array.";
        }
        
    }
    
    return 0;
    
}