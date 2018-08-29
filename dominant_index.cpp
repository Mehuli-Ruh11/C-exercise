class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int dom_idx;
        int idx;
              
        int arr[n];
        for(int i =0;i<n;i++)
        {
            arr[i]=nums[i];
        }
        
        sort(nums.begin(),nums.end());
        
        for (int i = 0; i < n; ++i)
        {
         cout << arr[i] << ' ';
         }
        cout << endl;
        
        if(nums[n-1]>= (2*nums[n-2]))
        {
            dom_idx=nums[n-1];
        }
        else
        {
            return -1;
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==dom_idx)
            {
                 idx=i;
            }
        }
        
      return idx; 
        
    }
};
