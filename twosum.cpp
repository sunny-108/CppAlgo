#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

std::vector<int> twosum(std::vector<int>& nums, int target){
    cout<<"#1";
    std::vector<int> sol;
    std::unordered_map<int, int> umap;

    for(int i=0; i<nums.size(); ++i){
        int diff = target - nums.at(i);
        if(umap.count(diff) == 0)
            umap[diff] = i;
        else{
            sol.push_back(umap[diff]);
            sol.push_back(i);
            std::cout<<"i = "<<i<<std::endl;
            break;
        }
    }

    return sol;
}

int main(){
    cout<<"shivam"<<endl;

    vector<int> v {2, 7, 11, 15};
    vector<int> sol = twosum(v, 9);
    for(auto x : sol){
        cout<<" "<<x;
    }
    cout<<endl;
}