#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    long long int n, m;
	    cin>> n >> m;
	    long long int minsal[n+1], offeredsal[m+1], maxjob[m+1];
	    long long int candidates = 0, tsal = 0, tcomp = 0;
	    vector <string> qual;
        string str;
	    int i = 1;
	    long long int comp[m+1];
	    for(i; i <= n; i++)
	        cin >> minsal[i];
	    for(i = 1; i <= m; i++)
	    {
	        cin >> offeredsal[i] >> maxjob[i];
	    }
	    int lg = 0, temp;
	    bool flag;
	    int j =1;
	    for(i = 1; i <= n ; i++)
	    {
	            cin >> str;
                qual.push_back(str);
	    }
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
            cout<<qual[i][j];
            cout<<endl;
        }
	    for(i = 1; i <= n; i++)
	    {
	        flag = false;
	        lg= 0;
	        for(int j = 1; j <= m; j++)
	        {
	            int sal = 0;
	            if(qual[i][j] == '1')
	            {
	                if(offeredsal[j] >= minsal[i])
	                {
	                    if(maxjob[j] != 0)
	                    {
	                        sal = offeredsal[j];
	                        flag = true;
	                    }
	                }
	            }
	            if(sal > lg)
	            {
	                lg = sal;
	                temp = j;
	                maxjob[temp]--;
	            }
	        }
	        if(flag == true)
	        {
	           //cout<<"loop"<<endl;
	            tsal+=lg;
	            candidates+=1;
	            comp[temp] = 1;
	        }
	    }
	    for(i = 1; i <= m; i++)
	    {
	        if(comp[i] != 1) tcomp++;
	    }
	    cout<< candidates << " " << tsal << " " << tcomp << endl;
	}
	return 0;
}
 