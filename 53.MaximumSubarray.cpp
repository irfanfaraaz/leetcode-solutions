class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int m=0;
        int ans=-999999999;
        for(int i:nums){
            sum+=i;
            ans=max(ans,sum-m);
            m=min(sum,m);
        }
        return ans;

    }
};
