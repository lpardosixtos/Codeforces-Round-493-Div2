#include <bits\stdc++.h>

using namespace std;

int main(void){

    int n, B;
    cin >> n >> B;
    vector<int> zeros;
    int A[n], parity=0;
    bool cut=false;
    for(int i=0; i<n; i++){
        cin >> A[i];
        if(cut==true){
            cut=false;
            zeros.push_back(abs(A[i]-A[i-1]));
        }
        if(A[i]&1) parity+=1;
        else parity-=1;
        if(parity==0) cut=true;
    }
    int sum=0, cuts=0;
    sort(zeros.begin(), zeros.end());
    for(int i=0; i<zeros.size(); i++){
        if(sum+zeros[i]<=B){
            sum+=zeros[i];
            cuts++;
        }
        else break;
    }
    cout << cuts << "\n";

    return 0;
}
