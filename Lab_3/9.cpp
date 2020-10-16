//https://leetcode.com/problems/top-k-frequent-elements/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> f;
        vector<int> res;
        vector<pair<int, int>> vpair;
        
        for(int x: nums)
            f[x]++;
        
        for(auto x: f) 
            vpair.push_back({x.second, x.first});
        
        sort(vpair.begin(), vpair.end());
        
        reverse(vpair.begin(), vpair.end());

        for(int i = 0; i < k; i++) 
            res.push_back(vpair[i].second);
        
        return res;
    }
};


