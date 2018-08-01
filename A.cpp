#include <iostream>
using namespace std;
int main() {
    int n,x,first,kol;
    cin >> n;
    cin >> x;
    first=1;
    kol=1;
    int m[1002];
    for (int i=1; i<n; i++) {
        cin >> x;
        first++;
        if (x==1) {
            m[kol]=first-1;
            kol++;
            first=1;
        }
    }
    m[kol]=first;
    cout << kol << endl;
    for (int i=0; i<kol; i++) {
        cout << m[i+1] << " ";
    }
    return 0;
}