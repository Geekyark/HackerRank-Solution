#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , t , maxi=0;
    cin >> n;
    int types[5]={};
    while(n--){
        cin >> t;
        types[t-1]++;
    }
    for(int i=1 ; i<5 ; i++){
        if(types[i]>types[maxi]) maxi=i;
    }
    cout << maxi+1 << endl;
    return 0;
}

