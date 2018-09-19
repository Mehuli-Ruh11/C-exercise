class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
        {
            return 0;
        }
        int count=0;
        int n=height.size();
        int max=height[0];
        for(int k=1;k<n;k++)
        {
            if(max<height[k]){max=height[k];}
        }
    
    for(int j=0;j<max;j++)
    {
        //cout<<count<<endl;
        int nz=0;
         for(int i=1;i<n;i++)
        {
             if(height[i]==0)
            {
                if(height[i-1]>=1 && height[i+1]>=1)
                {
                    count++;
                }
                
                else if( height[i+1]<=0)
                {
                  nz++;
                  
                }
                 else if(nz>0 && height[i+1]>=1 )
                 {
                     nz++;
                     count+=nz;
                     nz=0;
                 }
                 
            }
        }
         for(int l=1;l<n;l++)
         {
             height[l]=height[l]-1;
         }
            
     }
        
    return count;    
    }
};
