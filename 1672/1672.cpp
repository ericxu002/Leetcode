//https://leetcode.com/problems/richest-customer-wealth/
#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int> > &accounts)
{
    int wealthiest(0);
    for (unsigned long i = 0; i < accounts.size(); i++)
    {
        int currentSum(0);
        for (unsigned long j = 0; j < accounts[i].size(); j++)
        {
            currentSum += accounts[i][j];
        }
        if (currentSum > wealthiest)
        {
            wealthiest = currentSum;
        }
    }
    return wealthiest;
}

int main(){
    vector<vector<int> > input;
    vector<int> p1;
    p1.push_back(1);
    p1.push_back(2);
    p1.push_back(3);
    vector<int> p2;
    p2.push_back(3);
    p2.push_back(2);
    p2.push_back(1);
    input.push_back(p1);
    input.push_back(p2);
    cout<<maximumWealth(input)<<endl;
    return 0;
}