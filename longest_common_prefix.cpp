class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp; 
        if(strs.size()==0)
        {
          return lcp;  
        }
        
        lcp=strs[0];
        
        for(int i=1; i<strs.size(); i++)
        {
            for(int j=0; j<=min(lcp.length(), strs[i].length()); j++)
            {
                if(j==strs[i].length())
                {
                lcp=strs[i]; 
                break; 
                }
                if(lcp[j]!=strs[i][j])
                {
                 lcp=lcp.substr(0, j);
                 break;
                }
            }
        }
        return lcp; 
        
    }
};
