        int n=nums.size();
        if(n==1){return 0;}
        int left=0,right=n-1;
        while(left<=right)
        {
           int mid=left+(right-left)/2;
            if((mid==0 && nums[mid]>=nums[mid+1])||(mid==n-1 && nums[mid]>=nums[mid-1])){cout<<mid<<endl;return mid;} 
            else if(mid>=0 && nums[mid]<=nums[mid+1]){left=mid+1;}
            else if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]){return mid;}
            else{right=mid-1;}
            
        }


return left;  
