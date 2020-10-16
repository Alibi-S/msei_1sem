//https://leetcode.com/problems/random-pick-index/

class Solution {
public:
    vector<int> numss;
    Solution(vector<int>& nums) {
        numss = nums;
    }
    
    int pick(int target) {        
        int tarnums = 0;
        for (int i=0; i<numss.size(); i++){
            if (numss[i] == target){
                tarnums++;
            }
        }
        int idx = rand() % tarnums;
        
        int targetx = 0;
        for (int i = 0; i < numss.size(); i++){
            if (numss[i] == target){
                if (targetx == idx) return i;
                targetx++;
            }
        }
        
        return -1;
    }
};
