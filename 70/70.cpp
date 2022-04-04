//https://leetcode.com/problems/climbing-stairs/ 
//* COMPLETED / FINISHED TO THE MAX (LIKE THIS IS THE MOST OPTIMAL METHOD TOO*//
#include <iostream>
using namespace std;
int climbStairs(int n){
        if (n==2){
            return 2;
        }
        int firstPrev(2);
        int secondPrev(1);
        int sum(0);
        for(int i = 2; i < n; i++){
            sum = secondPrev + firstPrev;
            secondPrev = firstPrev;
            firstPrev = sum;
        }
        return sum;
}

int main(){
    cout<<climbStairs(10)<<endl;
    return 0;
}