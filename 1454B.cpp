#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t, n, num, *a, *ind;

    bool ganador;

    cin >> t;

    for (int i = 0; i < t; i++){

        cin >> n;

        a = new int [n];
        ind = new int [n];

        fill(a, a + n, 0);

        for (int j = 0; j < n; j++){

            cin >> num;
            a[num - 1]++;
            ind[num - 1] = j + 1;
        }

        //2 3 2 4 2
        //0 2 1 1 0

        //

        ganador = false;

        for (int j = 0; j < n; j++){

            if (a[j] == 1){
                cout << ind[j] << endl;
                ganador = true;
                break;
            }
        }

        if (ganador == false){
            cout << -1 << endl;
        }

        free(a);
        free(ind);
    }

    return 0;
}