#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m,n;
    long l1,l2,i,j,res;
    cin >> m;
    cin >> n;
    res=0;
    l1=m.length()-1;
    l2=n.length()-1;
    for(i=l1,j=l2; i>=0 && j>=0; i--,j--) {
        if (m[i] == n[j]) {
            res++;
        }
        else {
            break;
        }
    }
    cout << l1+l2-2*res+2;
}