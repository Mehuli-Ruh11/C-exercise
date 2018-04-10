class Solution {
public:
    int jump(vector<int>& nums) {
                int n = nums.size();
        int res;
        res = minJumps(nums, 0, n-1);
        return res;      
    }
     
    int minJumps(vector <int> arr, int l, int h)
    {
        if (h == l)
     return 0;
 
  
   if (arr[l] == 0)
     return INT_MAX;
 

   int min = INT_MAX;
   for (int i = l+1; i <= h && i <= l + arr[l]; i++)
   {
       int jumps = minJumps(arr, i, h);
       if(jumps != INT_MAX && jumps + 1 < min)
       {
        min = jumps + 1;   
       }
           
   }
 
   return min;
    }
};
