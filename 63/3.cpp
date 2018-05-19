#include <bits/stdc++.h>
using namespace std;
// ITSA 63 Problem 3. 衣服尺寸 

int main(){
    while(1){
        double h,w,age;
        int endflag;
        cin >> h >> w >> age;
        cin >> endflag;

        double ans1 = w/h*41.2;
        double ans2 = w*h/634.4;
        double ans3 = w*0.4;

        if(age > 30){
            ans2+=int((age-30)/5)*0.15;
            //ans2+=(age-30)/5*0.15;
        }
        if(age > 28){
            ans3+=int((age-28)/2)*0.25;
        }
        printf("%.2f %.2f %.2f\n",ans1,ans2,ans3 );

        if(endflag == -1) break;
    }

    return 0;
}
/*
170 85 42 
0 
135 22 10 
-1 
*/
/*
20.60 22.93 35.75 
6.71 4.68 8.80 
*/