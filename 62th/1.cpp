#include <bits/stdc++.h>
#define lld long long
#define PB push_back
#define fast cin.tie(0);ios_base::sync_with_stdio(0);
#define pii pair<int,int>
using namespace std;

// ITSA 62th Problem 1. 圈圈叉叉
// ... 爆力解，非常沒有 sense ，別學，趕快關掉阿

int main(){

    int times; cin >> times;
    while(times--){
        int arr[3][3];
        for (size_t i = 0; i < 3; i++) {
            for (size_t j = 0; j < 3; j++) {
                cin >> arr[i][j];
            }
        }// end of two for
        int tmp=0;
        for (size_t i = 0; i < 3; i++)
            tmp+=arr[i][0];
        if(tmp==0 || tmp==3){
            cout << "True" << endl;
            continue;
        }

        tmp=0;
        for (size_t i = 0; i < 3; i++)
            tmp+=arr[i][1];
        if(tmp==0 || tmp==3){
                cout << "True" << endl;
                continue;
        }

        tmp=0;
        for (size_t i = 0; i < 3; i++)
            tmp+=arr[i][2];
        if(tmp==0 || tmp==3){
                cout << "True" << endl;
                continue;
        }
        // --------------------------------------

        tmp=0;
        for (size_t i = 0; i < 3; i++)
            tmp+=arr[0][i];
        if(tmp==0 || tmp==3){
                cout << "True" << endl;
                continue;
        }

        tmp=0;
        for (size_t i = 0; i < 3; i++)
            tmp+=arr[1][i];
        if(tmp==0 || tmp==3){
                cout << "True" << endl;
                continue;
        }
        tmp=0;
        for (size_t i = 0; i < 3; i++)
            tmp+=arr[2][i];
        if(tmp==0 || tmp==3){
                cout << "True" << endl;
                continue;
        }

        // --------------------------------------------

        tmp =0 ;
        tmp+= arr[0][0];
        tmp+=arr[1][1];
        tmp+=arr[2][2];
        if(tmp==0 || tmp==3){
                cout << "True" << endl;
                continue;
        }

        tmp =0 ;
        tmp+= arr[0][2];
        tmp+=arr[1][1];
        tmp+=arr[2][0];
        if(tmp==0 || tmp==3){
                cout << "True" << endl;
                continue;
        }

        cout << "False" << endl;
    }
    return 0;
}

/*
3
0 1 0
1 0 1
1 0 1
1 0 0
0 1 0
0 0 1
0 0 1
0 1 0
1 0 0
*/
/*
False
True
True
*/