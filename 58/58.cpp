//https://leetcode.com/problems/length-of-last-word/

#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
        int end = s.find_last_not_of(' ');
        bool noWhite = true;
        string noTrail = s.substr(0, end+1);
        for(unsigned long i = 0; i < noTrail.length(); i++){
            if(noTrail[i] == ' '){
                noWhite = false;
            }
        }
        if(noWhite){
            return noTrail.length();
        }
        string returnString("");
        for(unsigned long z = noTrail.length(); z > 0; z--){
            if(isalpha(noTrail[z])){
                returnString += noTrail[z];
            }
            if(noTrail[z] == ' '){
                break;
            }
        }

        return returnString.length();

}

int main(){
    cout<<lengthOfLastWord("Hello World     ")<<endl;
    return 0;
}
