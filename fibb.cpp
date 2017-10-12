#include <bits/stdc++.h>
using namespace std;
int coun = 0;
vector< vector<int> >common;
int k = 0;
int i;
int fib(vector <int> arr, int i2)
{
    vector <int> arr2;
    arr2 = arr;
    coun++;
   /* bool flag = false;
    for(int i = 0; i < k; i++)
    {
        if(common[i] == arr2)
        {
            flag = true;
            break;
        }
    }
    common[k] = arr2;
    k++;*/
    int i;
    for(i = i2; i >= 0; i--)
    {
      //  if(flag == true) continue;
        if(arr[i] > 0 && arr[i+1] > 0)
        {
            if(i != (arr.size()-2))
            {
                //cout << "loop 1"<<endl;
                arr[i]--;
                arr[i+1]--;
                arr[i+2]++;
                for(int j = 0; j < arr2.size(); j++)
                    cout<<arr[j]<<" ";
                cout << endl;
                fib(arr, arr.size()-2);
            }
            if(i == arr.size()-2)
            {
               // cout << "loop 2"<<endl;
                arr[i]--;
                arr[i+1]--;
                arr.push_back(1);
                for(int j = 0; j < arr.size(); j++)
                    cout<<arr[j]<<" ";
                cout << endl;
                fib(arr, arr.size()-2);
            }
        }
    }
    return 0;
}
int main() {
	int test;
	cin >> test;
	while(test--)
	{
	    coun = 0;
	    int n;
	    cin >> n;
	    std::vector<int> arr ;
	    int t;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> t;
	        arr.push_back(t);
	    }
	    fib(arr, arr.size()-2);
	    cout << coun << endl;
	}
	return 0;
}
