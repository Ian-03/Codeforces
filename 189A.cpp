#include <iostream>
#include <algorithm>

using namespace std;

int maxPieces(int n, int a, int b, int c);

int *memo;

int main(){

    int n, a, b, c;

    cin >> n >> a >> b >> c;

    memo = new int[n + 1];

    fill(memo, memo + n + 1, 0);

    cout << maxPieces(n, a, b, c);

    return 0;
}

int maxPieces(int n, int a, int b, int c){

    if (n == 0){
        return 0;
    }
    if (memo[n] != 0){
        return memo[n];
    }

    int s = -4000;

    if (n >= a){ 
        s = max(s, maxPieces(n - a, a, b, c) + 1);
    }
    if (n >= b){
        s = max(s, maxPieces(n - b, a, b, c) + 1);
    }
    if (n >= c){
        s = max(s, maxPieces(n - c, a, b, c) + 1);
    }

    return memo[n] = s;
}