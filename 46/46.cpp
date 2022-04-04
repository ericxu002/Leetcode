//https://leetcode.com/problems/permutations/
#include <iostream>
#include <vector>
using namespace std;

int factorial(vector<int>& nums){
    int numsOfLoop(1);
    for(int i = nums.size(); i > 0; i--){
        numsOfLoop *= i;
    }
    return numsOfLoop;
}

vector<vector<int> > permute(vector<int>& nums){
    vector<vector <int> > return_vector;
    for(int i = 0; i < factorial(nums); i++){
        vector<int> within;
        unsigned long z(0);
        while(z< nums.size()){
            within.push_back(nums[z]);
            z++;
        }
        return_vector.push_back(within);
    }
    return return_vector;
}


int main(){
    vector<int> trial;
    trial.push_back(1);
    trial.push_back(2);
    trial.push_back(3);
    vector<vector<int> > okay = permute(trial);
    for(unsigned long i = 0; i < okay.size(); i++){
        cout<<"[";
        for(unsigned long p = 0; p < okay[i].size(); p++){
            cout<<okay[i][p]<<" ";
        }
        cout<<"]";
    }
    cout<<endl;
}

