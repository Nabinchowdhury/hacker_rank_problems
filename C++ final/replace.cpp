#include <bits/stdc++.h>

using namespace std;

void replaceWord(string s, string x){
    int s_size=s.size(), x_size=x.size();
    for(int i=0; i<=s_size-x_size; i++){
        string test="";
        for (int j=i; j<i+x_size; j++){
            test+= s[j];
        }
        if(test == x) {
            s.replace(i,x_size, "$");
            
        }
    }
    cout<<s<< endl; 
}

int main()
{
    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        string s,x;
        cin>>s>>x;
        replaceWord(s, x);
    }
    return 0;
}