class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // left is directly stored in the answers array
        int n=nums.size();
        vector<int> ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        // right product is stored in a variable to reduce the size
        int rightproduct=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=rightproduct;
            rightproduct*=nums[i];
        }
        return ans;

    }
};