#include <bits/stdc++.h>

using namespace std;

int main(void){

    int n;
    cin >> n;
    vector<pair<int, int> >balloons(n);
    for(int i=0; i<n; i++){
        cin >> balloons[i].first;
        balloons[i].second=i;
    }
    sort(balloons.begin(), balloons.end());
    if(balloons.size()==1){
        cout << -1 << "\n";
    }
    else{
        if(balloons.size()==2){
            if(balloons[0].first==balloons[1].first){
                cout << -1 << "\n";
            }
            else{
                cout << 1 << "\n" << balloons[0].second+1 << "\n";
            }
        }
        else{
            cout << 1 << "\n" << balloons[0].second+1 << "\n";
        }
    }





    return 0;
}
