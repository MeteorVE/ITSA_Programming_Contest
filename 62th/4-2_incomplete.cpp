#include <bits/stdc++.h>
#define lld long long
#define PB push_back
#define fast cin.tie(0);ios_base::sync_with_stdio(0);
#define pii pair<int,int>
using namespace std;

// ITSA 62th Problem 4. 盜墓驚魂 
// 沒有解出來 ... incomplete 
// 根據他人指出，這是數學題，XOR，有時間會補上正確 code 

int main(){
    char nothing;
    int times; cin >> times;
    while(times--){
        int put;
        cin >> put ;

        int arr[101];
        for(int i=0;i<101;i++) arr[i]=0;
        for (size_t i = 0; i < put; i++) {
            cin >> arr[i];
        }
        int ans=0,flag=0;
        int all = 0;

        for(int i=0;i<put;i++){
            if(arr[i]==1)ans++;
            else all++;
        }
        if(all%2==0 && ans%2==0) cout << "no" << endl;
        else cout << "yes" << endl;
    }
    return 0;
}
/*
5
5
1 1 10 10 10
2
1 1
5
1 1 1 1 10
6
10 10 10 5 1 10
4
10 10 1 1

*/
