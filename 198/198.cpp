//https://leetcode.com/problems/house-robber/
#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int> &nums)
{
    int totalMoney1(0);
    if(nums.size() == 1){
        return nums[0];
    }
    if (nums.size() < 3)
    {
        if (nums[0] >= nums[1])
        {
            return nums[0];
        }
        else
        {
            return nums[1];
        }
    }
    if(nums.size() == 4){
        if(nums[3] + nums [1] >= nums[0] + nums[2] && nums[3] + nums [1] >= nums[0] + nums[3]){
            return nums[3] + nums [1];
        }
        else if(nums[0] + nums[2] >= nums[3] + nums[1] && nums[0] + nums [2] >= nums[0] + nums[3]){
            return nums[0] + nums[2];
        }
        else{
            return nums[0] + nums[3];
        }

        
    }

    totalMoney1 += nums[0];
    for (unsigned long i = 2; i < nums.size(); i += 2)
    {
        totalMoney1 += nums[i];
    }

    int totalMoney2(0);
    totalMoney2 += nums[1];

    for (unsigned long i = 3; i < nums.size(); i += 2)
    {
        
        totalMoney2 += nums[i];
    }

    if (totalMoney2 > totalMoney1)
    {
        return totalMoney2;
    }
    else
    {
        return totalMoney1;
    }

    return 0;
}

int main()
{
    //[0,1,1,1,1,10]
    //[2,7,9,3,1]
    vector<int> input;

    input.push_back(0);
    input.push_back(1);
    input.push_back(1);
    input.push_back(1);
    input.push_back(1);
    input.push_back(10);
    cout << (rob(input));
    return 0;
}