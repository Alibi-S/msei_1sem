//https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        unordered_set<int> a, b;
        vector<int> res;
        
        for(int i=0; i<n1.size(); i++)
            a.insert(n1[i]);
        for(int i=0; i<n2.size(); i++)
            b.insert(n2[i]);
        
        
        for(int x: a)
            if(b.find(x)!=b.end())
                res.push_back(x);
        
        return res;
    }
};
