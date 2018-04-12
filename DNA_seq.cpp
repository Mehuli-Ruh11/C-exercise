class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        int count=0;
        int n = s.length();
        vector<string> new_str(n);
        /*for (int k=0;k<n;k++)
            {
                new_str[k]=" ";   
            }*/
        for(int i =0; i <=n-10; i++)
        {
            string s1 (s,i,10);
            //string s1 = s.substr(i,10);
            
            for(int j=i+1; j<=n-10;j++)
            {
                string s2 (s,j,10);
                int flag=s1.compare(s2);
                if(flag==0)
                {
                    if(is_unique(new_str,s1)){
                        new_str[count]=s1;  
                    
                    count++;
                    } 
                    break;
                 }
            }
          
        }
    //printf("%d",count);
        
    vector<string> fin_str(count); 
        for (int k=0;k<count;k++)
        {
         fin_str[k]=new_str[k];   
        }
        
        
    return fin_str;    
    }
 int is_unique(vector<string> new_str, string s)
 {
     int n=new_str.size();
     for(int i =0; i <n; i++)
     {
         string s2=new_str[i];
         if(s.compare(s2)==0)
         {
             return 0;
         }
        
     }
     
     return 1;
 }
};
