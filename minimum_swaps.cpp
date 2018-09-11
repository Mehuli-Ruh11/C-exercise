using namespace std;

vector<string> split_string(string);


int minimumSwaps(vector<int> arr) {
    int c=0;
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    { 
        if(arr[i]==i+1)
        {
         continue;   
        }
        if(arr[i]-1>=0 && arr[i]-1<=n)
        {
        swap(arr[i],arr[arr[i]-1]);
        c++;
        i--;
        }
    }

return c;
}
