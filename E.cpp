#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,sum,res,x;
    bool f;
    cin >> n >> m;
    map<int, long long> mapp;
    sum=0;
    res=0;
    mapp[0]=1;
    f=false;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x>m) {
		sum++;
	} else {
		if (x<m) {
			sum--;
		}
	}
        if (x==m) {
		f=true;
	}
        if (f) {
		res+=mapp[sum]+mapp[sum-1];
	}
        else {
		mapp[sum]++;
	}
    }
    cout << res;
}
