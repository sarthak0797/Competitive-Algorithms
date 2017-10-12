#include <bits/stdc++.h>
using namespace std;
 
int main() {
	    int test;
	    cin >> test;
	    while(test--)
	    {
	        string s;
	        string t;
	        cin >> s;
	        cin >> t;
	        bool temp = false;
	        for(int i = 0; i < s.size(); i++)
	        {
	            for(int j = i+1; j < s.size(); j++)
	            {
	                if(s[i] == s[j])
	                {
	                    //cout<<s[i]<<" ";
	                    temp = t.find(s[i]);
	                   // cout<<temp<<" ";
	                }
	                if(temp == true) break;
	            }
	            if(temp == true) break;
	        }
	        if(temp == true)
	        {
	            cout<<"A"<<endl;
	        }
	        else
	        {
	            int unique_a = 0, unique_b = 0, ab = 0;
	            int a[27] = {0};
	            int b[27] = {0};
	            for(int i = 0; i < s.size(); i++)
	            {
	                a[s[i]-'0']++;
	            }
	            for(int i = 0; i < t.size(); i++)
	            {
	                b[t[i]-'0']++;
	            }
	           for(int i = 0; i < 27; i++) cout<<a[i]<<" ";
	            cout<<endl;
	            for(int i = 0; i < 27; i++) cout<<b[i]<<" ";
	            cout<<endl;
	            for(int i = 0; i < 27; i++)
	            {
	                if(a[i] > 0 && b[i] > 0) ab++;
	                else if(a[i] > 0) unique_a++;
	                else if(b[i] > 0) unique_b++;
	            }
	            //cout<<ab<<" "<<unique_a<<" "<<unique_b<<" ";
	            if(unique_a > unique_b) cout<< "A" <<endl;
	            else cout << "B" <<endl;
	        }
	    }
	return 0;
}   