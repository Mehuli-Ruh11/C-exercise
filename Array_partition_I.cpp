class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n/2;i++)
        {
            sum+=nums[2*i];
        }
       
        return sum;
    }
};
