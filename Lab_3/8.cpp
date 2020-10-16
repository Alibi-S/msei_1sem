//https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
    map<int,int> m;
    int res=0;
    while(res!=1){
        res=0;
        while(n){
            res+=(n%10)*(n%10);
            n/=10;
        }
        n=res;
        if(m.find(res)==m.end())
            m[res]=1;
        else{
            m.clear();
            return false;
        }
    }
    return true;
}
};

