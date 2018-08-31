class Solution {
public:
    int strStr(string haystack, string needle) {
        int id;
        int x=needle.size();
        int y =haystack.size();
        string temp;
        int i=0;
        
        if(needle.empty())
        {
            return 0;
        }
        
        while(i<y-x+1)
        {
          temp=haystack.substr(i,x);
            
          if(needle==temp)
          {
              id=i;
              return id;
          }
            i++;
            
        }
        
       return -1; 
    }
};
