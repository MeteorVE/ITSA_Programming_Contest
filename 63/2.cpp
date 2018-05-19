#include <bits/stdc++.h>
using namespace std;
// ITSA 63 Problem 2. 括號匹配問題 

int main(){

    int times; char nothing;
    cin >> times; getchar();
    while(times--){
        string input;
        getline(cin,input);
        int a=0,b=0;
        bool endFlag = false;
        for (size_t i = 0; i < input.length(); i++) {
            if(char(input[i])=='(')
                a++;
            if(char(input[i])==')')
                b++;
            if(b>a){
                cout << "No" << endl;
                endFlag = true;
                break;
            }
        }
        if(endFlag == true)
            continue;
        if(a!=b) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}
/*
2 
()() 
()(() 

/*
Yes 
No
*/