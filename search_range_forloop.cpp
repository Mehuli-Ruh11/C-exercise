class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();
        vector<int> res(2);
        res[0]=-1;
        res[1]=-1;
        
        if(nums.empty())
        {
            return res;
        }
        
        int left=0,right=n-1;
        vector<int> temp(n);
        int count=0;
        
        for(int i=0;i<n;i++)
        {
        if(nums[i]==target)
        {
            temp[count]=i;
            count++;
        }
        }
       
        if(count!=0)
        {
        res[0]=temp[0];
        res[1]=temp[count-1];   
        }
        
        return res;
        
        
    }
};
