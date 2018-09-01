class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int i=0;
        
        while(i<nums.size())
        {
            int k=0;
            while(nums[i]==1)
            {
                k++;
                i++;
            }
            if(count<=k)
            {
             count=k;   
            }
            i++;
         }
        
        return count;
        
    }
};
