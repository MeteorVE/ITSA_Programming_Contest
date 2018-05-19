#include <bits/stdc++.h>
using namespace std;
// ITSA 63 Problem 1. 星座查詢 

int main(){

    int times;
    cin >> times;
    int star[] = {999,21,19,21,21,22,22,23,24,24,24,23,22};
    string name[] = {"","Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Sagittarius","Capricorn"};
    while(times--){
        int a,b;
        cin >> a >> b;
        if(b>=star[a])
            cout << name[a] << endl;
        else
            cout << name[a-1] << endl;
    }

    return 0;
}
/*
2 
08 20 
06 24 

*/
/*
Leo 
Cancer
*/