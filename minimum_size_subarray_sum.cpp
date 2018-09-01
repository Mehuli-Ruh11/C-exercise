class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n=nums.size();
 
        int res=n+1;
        
        for (int i=0;i<n;i++)
        {
            int sum=nums[i];
            int k=0;
            
            if(sum>=s)
            {
                return 1;
            }
            
            for(int j=i+1;j<n;j++)
            {
                sum+= nums[j];
                if(sum>=s & (j-i+1)<res)
                {
                    res=j-i+1;
                }

            }

        }
        
if(res==n+1)
{
    return 0;
}
        
        return res;
    }
};
