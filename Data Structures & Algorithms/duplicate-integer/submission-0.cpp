class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int n=nums.size();
       bool duplicate=false;
        map<int,int>mpp;
        for (int i:nums){
            mpp[i]++;
        }
        for (auto it:mpp){
            if(it.second>=2){
                duplicate=true;
                return duplicate;
            }
        }
        return duplicate;
    }
};