/*
    https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan&id=level-1
*/

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    int vsize = nums.size();
    int lt_sum = 0, rt_sum = 0;
    for(int i=1; i<vsize; i++){
        rt_sum += nums.at(i);
    }
    if(lt_sum == rt_sum){
            return 0;
    }
    for(int i=1; i<vsize; i++){
        lt_sum = lt_sum + nums.at(i-1);
        rt_sum = rt_sum - nums.at(i);
         if(lt_sum == rt_sum){
            return i;
        }        
    }
    return -1;
}

int main(){
    cout<<"shivam"<<endl;
    vector<int> v {1,7,3,6,5,6};
    cout<<" pivot = "<<pivotIndex(v)<<endl;
}

/*
    //O(N) time O(1) space
    int pivotIndex(vector<int>& nums) 
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);        
        for (int i = 0, leftSum = 0; i < nums.size(); leftSum += nums[i++])
            if (2*leftSum == sum - nums[i]) return i;

        return -1;
    }
*/