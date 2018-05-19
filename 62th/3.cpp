#include <bits/stdc++.h>
#define lld long long
#define PB push_back
#define fast cin.tie(0);ios_base::sync_with_stdio(0);
#define pii pair<int,int>
using namespace std;

// ITSA 62th Problem 3. 猜數字的判別

int main(){
    int times; cin >> times; getchar();
    while(times--){
        string s,s2;
        getline(cin,s);  //cin >> s;
        getline(cin,s2);
        //cout << "s1:" << s << " s2:" << s2 << endl;
        int arr[4],arr2[4];
        for (size_t i = 0; i < 4; i++) {
            arr[i] = int(s[i]);
            arr2[i] = int(s2[i]);
            //cout << int(s[i]) << " arr1:" << int(arr[i]) << " arr2:" << arr2[i] << endl;
        }
        int a=0,b=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(arr[i]==arr2[j]){
                    if(i==j){a++;}
                    else b++;
                }
            }
        }
        cout << a << "a" << b << "b" << endl;
    }
    return 0;
}
/*
1
0347
1437

*/
/*
1a2b
*/
