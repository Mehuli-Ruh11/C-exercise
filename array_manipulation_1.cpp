using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> v(n);
    long m=queries.size();
    cout<<m<<endl;
    long max=0;
     
    long x=0;
    for(long k=0;k<m;k++)
    {
        long start, end, val;
        start=queries[k][0]-1;
        end=queries[k][1]-1;
        val=queries[k][2];
        v[start] += val;
      if ((end+ 1) < n )
      {
         v[end+ 1] -= val;
      }
        
    }
    for(long i=0;i<n;i++)
    {
        x+=v[i];
        if(x>max){max=x;}
        else{max=max;}
    }   

return max;
}
