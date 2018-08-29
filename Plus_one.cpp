class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        int i =n-1;
        digits[n-1]=digits[n-1]+1;
             
        while(i>=0 & digits[i]>9)
            {
            if(i==0)
               {
                digits[i]=0;
                digits.insert(digits.begin(),1);
                return digits;
               }
            
                digits[i]=0;
                digits[i-1]= digits[i-1]+1;
                i--;
            
            }
            
        return digits;
        

        
    }
};
