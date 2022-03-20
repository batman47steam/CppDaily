#include<map>
#include<iostream>
using namespace std;

int main(){
    std::map<int, int> Pairs;
    
    for(auto i=0; i<4; i++)
        Pairs[i] = i*3;
    
    for(auto [key, value] : Pairs)
        std::cout << key << ": " << value << "\n";

    std::cout << "----------------------------------------" << std::endl;

    //访问字典中第一个位置的元素
    auto mapIter = Pairs.begin();
    std::cout << mapIter->first << ": " << mapIter->second << std::endl;

    //访问字典中的第三个位置的元素
    auto third = std::next(mapIter, 2);
    std::cout << third->first << ": " << third->second << std::endl;
    
}