using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int n=arr.size();
    int m=arr[0].size();
    int count=0;
    int x=(n-2)*(m-2);
    vector<int> temp_sum(x);
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
           temp_sum[count]=arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i+1][j-1]+arr[i+1][j]+arr[i-1][j+1]+arr[i+1][j+1];
            count++;
        }
    }
    int max=temp_sum[0];
  for(int i=1;i<x;i++)
    {
        if(max<temp_sum[i])
        {
         max=temp_sum[i];
        }
    }
return max;
}
