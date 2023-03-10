/*
  Given an array of integers nums and an integer target, 
  return indices of the two numbers such that they add up to target.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

std::vector<int> twosum(std::vector<int>& nums, int target){
    
    std::unordered_map<int, int> umap;
    
    for(int i=0; i<nums.size(); ++i)
    { 
        int num = nums.at(i);
        int num_to_find = target - num;  
        if(umap.count(num_to_find) == 0){
            umap[num] = i;
        }
        else{
            return {umap[num_to_find], i};
        }
    }

    return {};
}

int main(){
    cout<<"shivam"<<endl;

    vector<int> v {-1, -2, -3, -4, -5};
    vector<int> sol = twosum(v, -8);
    for(auto x : sol){
        cout<<" "<<x;
    }
    cout<<endl;
}

/*
    Runtime of this soluction = O(n),
    unordered-map perform there operation in O(1)
*/