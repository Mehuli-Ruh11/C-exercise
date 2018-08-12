class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
        {
            return -1;
        }
        vector<int> prefixsum(n);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++ )
        {
         prefixsum[i]=  prefixsum[i-1]+nums[i]; 
        }
        
        vector<int> suffixsum(n);
        suffixsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i-- )
        {
         suffixsum[i]= suffixsum[i+1]+nums[i]; 
        }
        
        for(int k=0;k<n;k++)
        {
            if(prefixsum[k]==suffixsum[k])
            {
                return k;
            }
        }
        
        return -1;
    }
};
