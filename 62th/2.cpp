#include <bits/stdc++.h>
#define lld long long
#define PB push_back
#define fast cin.tie(0);ios_base::sync_with_stdio(0);
#define pii pair<int,int>
using namespace std;

// ITSA 62th Problem 2. 高頻字元

int main(){
    char nothing;
    int times; cin >> times; cin >> nothing;
    while(times--){
        string s;
        getline(cin,s);  //cin >> s

        // 開這麼大格，因為不確定所有符號是不是都在0~幾百多 ... 有 bug，乾脆直接開很大
        int arr[2550];
        for(int i=0;i<2550;i++)
            arr[i]=0;
        for (size_t i = 0; i < s.length(); i++) {
            // 出現 bug ，乾脆位移 1000 最後再扣掉 ... 前後給你 1000 的緩衝總不會爆了
            arr[s[i]-'0'+1000]++;
            //cout << s[i]-'0' << " " ;
        }

        int maxx=-1;
        int target=0;
        for(int i=0;i<2550;i++){
            if(maxx < arr[i]){
                maxx = arr[i];
                target = i;
                //cout << "DEBUG:" << char(target+'0') << endl;
            }
        }
        cout << char(target-1000+'0') << endl;
    }
    return 0;
}
/*
2
We’re students!
Yes!!! ALL PASS!!!

*/
/*
e
!
*/
