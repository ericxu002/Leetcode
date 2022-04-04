//https://leetcode.com/problems/defanging-an-ip-address/
#include <iostream>
#include <queue>
using namespace std;
string defangIPaddr(string address) {
        queue<string> container;
        for(unsigned long i = 0; i < address.length(); i++){
            if(address[i] == '.'){
                container.push("[");
                container.push(".");
                container.push("]");
            }
            else{
                string s("");
                s.push_back(address[i]);
                container.push(s);
            }
        }
        string output("");
        while(!container.empty()){
            output += container.front();
            container.pop();
        }
        return output;
    }

int main(){
    cout<<defangIPaddr("1.1.1.1")<<endl;
    return 0;
}