#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

int main(){
    
    std::vector<int> values = {3, 4, 6, 9, 0, 1};
    std::sort(values.begin(), values.end(), std::greater<int>());
    
    for(int value:values)
        std::cout<<value<<" ";
    
    return 0;
    
    
}