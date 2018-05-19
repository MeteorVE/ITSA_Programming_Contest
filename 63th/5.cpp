#include <bits/stdc++.h>
using namespace std;
// ITSA 63 Problem 5. Decryption

int main(){
    string input;
    while(getline(cin,input)){
        int idx=1,sum = 0;
        for (size_t i = 0; i < input.length(); i++) {
            if(i==1 || i==5 || i >= 11) continue;
            sum += int(input[i]-'0')*idx;
            idx++;
        }
        if(sum%11==int(input[12]-'0') )
            cout << "Pass" << endl;
        else cout << "Fail" << endl;
    }
    return 0;
}
/*
0-670-82162-4
0-670-82162-2
0-670-82162-7

*/
/*
Pass 
Fail 
Fail 
*/