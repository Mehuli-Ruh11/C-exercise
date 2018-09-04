class Solution {
public:
    string reverseWords(string s) {
int count=0;
int n =s.length();
vector<string> arr(n);
string s2; 
        
int empty_count=0;
for (int i = 0; i < n; i++)
{
 if (s[i] == ' ') 
 {
     empty_count++;
 } 
}


if(empty_count==n)
{
    s2="";
}
        
if(empty_count!=n && n>1)
{
     for(int i=0;i<n;i++)
    {
        
        if(s[i]==' ')
        {
           count++;
        }
        else
        {
         arr[count]+= s[i];   
        }

    }

    
    
    for(int j=0;j<(count+1);j++)
    {
        string temp=arr[j];
        int l=temp.size();
        for( int k=0; k<l/2;k++)
        {
            swap(temp[k],temp[l-k-1]);
        }
        arr[j]=temp;
    }
    
      for(int j=0;j<count;j++)
        {
        s2 += arr[j];
        s2+= ' ';
        }
      s2+= arr[count];   
      
    }
    
return s2;
    
    
      
        
    }
};
