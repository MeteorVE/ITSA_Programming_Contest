#include <bits/stdc++.h>
using namespace std;
#define PB push_back
// Problem 4. 正方形 
// 沒解出來。

bool query(int target, int curr_need){
    for(int i=0; i<; i++){
        // if exist
        if(arr[i] == target){
            // delete and return success

        }
    }
    // not found that, query that.
    for(int i=0;i< arr.size();i++){
        int tmp = arr[i];
        query()

    }
}

vector<int> arr;
int side,sum;

int main(){

    printf("Incomplete Code !\n");

    int times,tmp;
    cin >> times;
    arr.clear();
    for (size_t i = 0; i < times; i++) {
        cin >> tmp;
        arr.PB(tmp);
    }
    sum=0;
    for (size_t i = 0; i < arr.size(); i++)
        sum+=arr[i];
    if(sum%4!=0)cout << "no" << endl;
    else{
        side = sum/4;
        bool flag=true;
        // 可有可無
        for (size_t i = 0; i < arr.size(); i++) {
            if(arr[i]>side){
                flag = false;
                //cout << side << " " << arr[i] << endl;
                break;
            }
        }//end of for

        for(int )

        if(flag)cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
/*
4 1 1 1 1 
*/
/*
yes   
*/