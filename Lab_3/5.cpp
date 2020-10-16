//https://leetcode.com/problems/word-pattern/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> m1;
        map<string, char> m2;
        vector<string> strs;
        
        string word;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ') word += s[i];
            if(s[i] == ' ' || i == s.size()-1){
                strs.push_back(word);
                word = "";
            }
        }
        
        for(int i = 0; i < strs.size(); i++){
            if(m1.count(pattern[i]) && strs[i] != m1[pattern[i]]) 
                return false;
            else if(!m1.count(pattern[i])) m1[pattern[i]] = strs[i];
            
            if(m2.count(strs[i]) && pattern[i] != m2[strs[i]])
                return false;
            else if(!m2.count(strs[i])) m2[strs[i]] = pattern[i];
        }
        
        if(pattern.size() != strs.size()) 
            return false;
        
        return true;
    }
};

