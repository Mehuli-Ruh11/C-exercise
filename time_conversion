#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    int len = s.size();
    string str (s);
    string s1 (str,len-2,2);
    string pm ("PM");
    string s_old (str,2,len-4);
    string time_str (str,2);
    string s_new;
        
    int time = stoi(s);

    
    if (s1.compare(pm)==0)
    {
        if(time==12){time=time;}else{time = 12+time;}
    }
    else{
        if(time==12){time=00;}
        else{time=time;}
    }
    if (time<10)
    {time_str ='0'+to_string(time) ;}
    else{time_str = to_string(time);}
    
    s_new =  time_str+s_old;
    
    return s_new;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
