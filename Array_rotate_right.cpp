class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        cout<<n<<endl;
        vector<int> new_nums(n);
        
        
        for(int i=n-1;i>=0;i--)
        {
            new_nums[(i+k)%n]=nums[i];
            
        }  

        
        for(int j=0; j<n;j++)
        {
            nums[j]=new_nums[j];
        }
        
        
    }
};
