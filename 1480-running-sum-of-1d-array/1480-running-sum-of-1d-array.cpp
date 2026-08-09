class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int running_sum=0;
        for(int i=0;i<(int)nums.size();i++){
            running_sum+=nums[i];
            ans[i]=running_sum;
        }
        return ans;
    }
};