//https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            res[strs[i]].push_back(temp);
        }
        
        vector<vector<string>> fin;
        for(auto i: res)
            fin.push_back(i.second);
        
        
        return fin;
    }
};
