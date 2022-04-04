//https://leetcode.com/problems/maximum-69-number/
#include <iostream>
using namespace std;

int maximum69Number (int num) {
        string number = to_string(num);
        for(unsigned long i = 0; i < number.length(); i++){
            if(number[i] == '6'){
                number[i] = '9';
                break;
            }
        }
        return stoi(number);
    }

int main(){
    cout<<maximum69Number(9669)<<endl;
    return 0;
}