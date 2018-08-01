#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int x,sum,res,n;
    sum=0;
    res=0;
    n=0;
    for(int i=0; i<s.length(); i++) {
        x=(s[i]-'0')%3;
        sum+=x;
        n++;
        if (x==0 || sum%3==0 || n==3) {
            res++;
            n=0;
            sum=0;
        }
    }
    cout << res;
    return 0;
}