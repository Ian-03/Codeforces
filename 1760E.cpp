#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t, n, ind0, ind1, *a, diff, k;

    long long res, res1, res2;

    cin >> t;

    for (int i = 0; i < t; i++){

        cin >> n;

        a = new int [n];

        ind0 = -1;
        ind1 = -1;

        for (int j = 0; j < n; j++){

            cin >> a[j];
            if (a[j] == 0 && ind0 == -1){
                ind0 = j;
            }
            if (a[j] == 1){
                ind1 = j;
            }
        }

        if (ind0 == -1 || ind1 == -1){

            cout << n - 1 << endl;

        }else{

            res = 0;
            k = 0;
        
            //normal array

            for (int j = 0; j < n; j++){
                if (a[j] == 0){
                    res += k;
                }else{
                    k++;
                }
            }

            res1 = 0;
            k = 0;
        
            //changing last ocurrence of 1 to 0

            a[ind1] = 0;

            for (int j = 0; j < n; j++){
                if (a[j] == 0){
                    res1 += k;
                }else{
                    k++;
                }
            }

            if (res1 > res){
                res = res1;
            }

            //changing first ocurrence of 0 to 1

            a[ind1] = 1;
            a[ind0] = 1;

            //0 0 1 1 1

            res2 = 0;
            k = 0;

            for (int j = 0; j < n; j++){
                if (a[j] == 0){
                    res2 += k;
                }else{
                    k++;
                }
            }

            if (res2 > res){
                res = res2;
            }

            cout << res << endl;
        }
    }

    return 0;
}