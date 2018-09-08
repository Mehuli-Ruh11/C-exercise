// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1,right=n-1;

        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(isBadVersion(mid)==false){left=mid+1;}
            else{right=mid-1;}
        }
    return right+1;
    }
};
