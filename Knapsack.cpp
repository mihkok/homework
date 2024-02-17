#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int W, n, weight;
    vector<int> weights;

    cin >> W >> n;

    for (int i = 0; i < n; ++i){
        cin >> weight;
        weights.push_back(weight);
    }

    int worth[n + 1][W + 1];
    for (int w = 0; w <= W; ++w){
        worth[0][w] = 0;
    }

    sort(weights.begin(), weights.end());

    for (int i = 1; i <= n; ++i){
        for (int w = 0; w <= W; ++w){
            if (weights[i - 1] > w){
                worth[i][w] = worth[i - 1][w];
            } else{
                worth[i][w] = max(worth[i - 1][w], worth[i - 1][w - weights[i - 1]] + weights[i - 1]);
            }
        }
    }
    cout << worth[n][W] << endl;    
    return 0;
}