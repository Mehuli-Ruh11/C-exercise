class Solution {
public:
    string reverseString(string s) {
        
        string res(s);
        int x=s.length()-1;
        cout<<x<<endl;
        
        for(int i=x;i>=0;i--)
        {
            res[i]=s[x-i];
            cout<<res[i]<<endl;

        }
        
        cout<<res<<endl;
        return res;
    }
};
