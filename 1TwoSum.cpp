class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> r;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=target-a;
            if(mp.count(b)!=0){
                r.push_back(mp[b]);
                r.push_back(i);
                
            }
            else{
                mp[a]=i;
            }           
        }
        return r;
    }
};
