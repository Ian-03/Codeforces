#include <iostream>

using namespace std;

int main(){

    int t, n, *a, *r;

    bool twice;

    cin >> t;

    for (int i = 0; i < t; i++){

        cin >> n;

        a = new int [n];
        r = new int [n];

        twice = false;

        for (int j = 0; j < n; j++){

            cin >> a[j];
            
            if (j == 0){
                r[j] = a[j];
            }else{
                
                if (twice == false){
                    if (a[j] == 0){
                        r[j] = r[j - 1];
                    }else if (r[j - 1] - a[j] < 0){
                        r[j] = r[j - 1] + a[j];
                    }else{
                        r[j] = 0;
                        twice = true;
                    }
                } 
            }
        }

        if (twice){
            cout << -1 << endl;
        }else{
            for (int j = 0; j < n; j++){
                cout << r[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}