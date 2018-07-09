#include <bits\stdc++.h>

using namespace std;

int main(void){

    long long int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    bool zeros=false;
    long long int sections=0;
    if(s[0]=='0'){
        zeros=true;
        sections++;
    }

    for(int i=1; i<s.size(); i++){
        if(zeros==false && s[i]=='0'){
            sections++;
            zeros=true;
        }
        if(s[i]=='1') zeros=false;
    }
    if(sections==0) cout << 0 << "\n";
    else{
        long long int ans;
        if(x<y) ans=(sections-1)*x+y;
        else ans=sections*y;

        cout << ans << "\n";
    }

    return 0;

}
