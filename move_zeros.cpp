class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> new_nums(n);
        int i=0;
        int count=0;
        while(i<n)
        {
            if(nums[i]==0)
            {
                i++;
            }
            else
            {
                new_nums[count]=nums[i];
                count++;
                i++;
            }
        }
        
        for(int j=0; j<n;j++)
        {
            nums[j]=new_nums[j];
        }
    }
};
