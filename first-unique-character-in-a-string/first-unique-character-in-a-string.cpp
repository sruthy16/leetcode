using namespace std; 

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> uniqChar;
        for(char c: s){
            uniqChar[c]++;
        }
        
        for(int i = 0; i < s.length(); i++){
            if(uniqChar[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};