#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int t,p;
    cin>>t;
    for(p=0;p<t;p++){
    string str;
    cin>>str;
        int i,j,flag=1;
    j=str.size()-2;
    for(i=1;i<str.size();i++){
        int temp=abs(str[i]-str[i-1]);
        int temp1=abs(str[j]-str[j+1]);
        if(temp!=temp1)
        {    
            flag=0;
            break;
        }
        else flag+=1;
        j--;
    }
    if(flag!=str.size()) cout<<"Not Funny"<<endl;
    else cout<<"Funny"<<endl;
    }
    return 0;
}
