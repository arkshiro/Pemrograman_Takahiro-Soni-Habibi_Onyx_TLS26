#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    bool status[n];

    for (int i = 0; i<n; i++) status[i] = 1;

    int live = n, order = 0, count = k;
    while (live>1){
        if (status[order]==1){
            if (count==1){
                status[order] = 0;
                if ((order+1)%2 == 0){
                    k += 2;
                }
                else{
                    k--;
                }
                if(k<2){
                    k = 2;
                }
                count = k;
                live--;
            }
            else {
                count--;
            }
        }

        order = (order + 1) % n;
    }

    for (int i = 0; i<n; i++){
        if (status[i]==1){
            cout << i+1;
            return 0;
        }
    }   
}