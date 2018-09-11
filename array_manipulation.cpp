using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n);
    long m=queries.size();
    cout<<m<<endl;
    long max=0;
    for(long i=0;i<m;i++)
    {       
        for(long j=queries[i][0]-1;j<queries[i][1];j++)
        {
           arr[j]+=queries[i][2]; 
            if(arr[j]>max){max=arr[j];}
            else{max=max;}
        }      
    }

return max;
}
