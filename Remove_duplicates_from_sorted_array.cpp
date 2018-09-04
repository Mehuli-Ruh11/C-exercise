class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int i=1;
        
        if(nums.empty())
        {
            return 0;
        }
        while(i<n )
        {
            if(nums[i-1]==nums[i])
            {
                i++;
            }
            else
            {
                count++;
                nums[count]=nums[i];
                i++;
            }
        }
        
    return count+1;    
        
    }
};
