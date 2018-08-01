#include <bits/stdc++.h>
using namespace std;

int main()
{

    int mas[120002];
    int nas[120002];
    int n,res,tek,max;
    long long st2[31];
    res=0;
    st2[0] = 2;
    for(int i=1; i<32; i++) {
        st2[i]=st2[i-1]*2;
    }
    cin >> n;
    max=0;
    for (int i=0; i<n; i++) {
        cin >> mas[i];
        nas[i]=0;
        if (max<mas[i]) {
            max=mas[i];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<32; j++){
            tek=st2[j]-mas[i];
            if (tek>0 && tek<=max) {
                if (nas[i] == 0) {
                    for (int k = i + 1; k < n; k++) {
                        if (tek == mas[k]) {
                            nas[i] = 1;
                            nas[k] = 1;
                        }
                    }
                }
            }
        }
        if (mas[i]==0) {
            res++;
        }
    }
    cout << n-res;
    return 0;
}