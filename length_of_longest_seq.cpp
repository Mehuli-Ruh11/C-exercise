class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if ( nums.empty() )
        {
            return 0;
        }
        int n = nums.size();
        vector<int> count(n);
        for (int i = 0; i<n;i++){ count[i]=1;}
        
        if (n>10000)
        {
            return -1;
        }
        int max =nums[0];
        int id = 0;
        for (int i=1; i<n;i++)
        {
            if(max<nums[i])
           {
               max=nums[i];
               count[id]++;    
           }
            else
            {
                id=id+1;
                max=nums[i];
            }
            printf("%d %c",count[id],',');
        }
        
        int j = count.size();
        int max_count = count[0];
        for(int i =0; i<j;i++)
        {
            if(max_count<count[i])
            {
                max_count=count[i];
            }
        }
        return max_count;
    }
};
