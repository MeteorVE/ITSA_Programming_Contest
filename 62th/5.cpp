#include <bits/stdc++.h>
#define lld long long
#define PB push_back
#define fast cin.tie(0);ios_base::sync_with_stdio(0);
#define pii pair<int,int>
using namespace std;

// ITSA 62th Problem 5. Frog Jumping 
// 小心很多 +1 -1 需要 debug ... 這才是這題最坑的主因

int main(){
    int times; cin >> times;

    while(times--){
        int MAX_len = 30001;
        int len;
        cin >> len;
        int X[len];
        for(int i=0;i<len;i++) X[i]=0;

        int obs;
        cin >> obs;
        //int obs_arr[obs+1];
        vector<pii> obs_arr;
        int init_jump = len;
        for(int i=0;i<obs;i++){
            int tmp1,tmp2; cin >> tmp1 >> tmp2;
            obs_arr.PB({tmp1,tmp2});
            for(int j=tmp1+1;j<=tmp2-1;j++){
                X[j] = 1;
            }
            init_jump = min(init_jump,tmp2);
        }

        int flag=1; // 0 = continue
        int ans = 1;
        init_jump = 1;
        for(int i=init_jump;i<=len;i++){
            int check=0;
            ans = i; // ...
            //cout << "before " << endl;
            for (int j = 1; j < (len/i+1) && check <= len ;j++) {
                if(X[j*i]!=1){
                    check = j*i; //cout << "i:" << i <<" j:" << j <<   "check:" << check <<endl;
                    flag = 1;
                    continue;
                }
                else {
                    flag = 0;
                    break;
                }
            }
            if(flag==0) continue;
            else {
                ans = i; break;
            }
        }
        cout << ans << endl;

    }
    return 0;
}
/*
4
30
2
15 21
3 8
30
3
3 10
12 20
22 30
30
1
1 29
28
3
4 8
12 16
24 28


*/
/*
11
10
29
4
*/