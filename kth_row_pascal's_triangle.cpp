class Solution {
public:
    vector<int> getRow(int rowIndex) {
      
    int x= rowIndex+1;
    int n=rowIndex;
    vector<int> res(x);

        
for(int j=0;j<n+1;j++)
   {
         int r=j;       
         if(r > n / 2)
         {
          r = n - r;    
         }
          long long ans = 1;
          for(int i = 1; i <= r; i++)
          {
           ans *= n - r + i;
           ans /= i;
          }
                
     res[j]=ans;               
                
                
         }
 
        
        return res;
        
    }
};
