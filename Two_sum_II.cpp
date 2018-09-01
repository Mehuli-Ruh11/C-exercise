class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n =numbers.size();
        vector<int> res(2);
        int sum;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=numbers[i]+numbers[j];
                if(sum==target)
                {
                    res[0]=i+1;
                    res[1]=j+1;
                    return res;
                }
                if(numbers[j]==numbers[i])
                {
                    break;
                }
            }
        }
        
        return res;
    }
};
