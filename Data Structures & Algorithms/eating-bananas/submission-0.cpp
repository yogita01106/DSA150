class Solution {
public:
    int requiredHours(vector<int>& piles, int cnt,int h){
        int hours=0;
        for (int i=0;i<piles.size();i++){
            hours+=ceil((double)piles[i]/(double)cnt);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int ans=0;
        int high=*max_element(piles.begin(),piles.end());
        while (low<=high){
            int mid=(low+high)/2;
            int hours=requiredHours(piles,mid,h);
            if (hours<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
