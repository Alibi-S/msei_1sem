class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dupl;
        for(int x: nums){
            if(dupl.find(x) != dupl.end()){
                return true;
            }
            else{
                dupl.insert(x);
            }
        }
        return false;
    }
};
