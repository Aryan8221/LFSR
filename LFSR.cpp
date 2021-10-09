#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "lenght: ";
    cin >> x;
    bool check;
    int q[x];
    int y[x];
    int j[x];
    for (int i = 0; i < x; i++) {
        cout << "enter number " << i+1 << " (0 or 1): ";
        cin >> y[i];
        j[i] = y[i];
        q[i] = y[i];
    }
    int output[100000];
    int L = 0;
    while (true) {
        output[L] = (y[x - 1]);
        //--------------
        for (int p = 0; p < x-1; p++) {
            y[p + 1] = j[p];
        }
        y[0] = (y[x - 1] xor j[x - 1]);
        for (int i = 0; i < x; i++) {
            cout << y[i];
        }
        cout << endl;
        for (int i = 0; i < x; i++) {
            j[i] = y[i];
        }
        L++;
        //check if y == q
        for (int i = 0;i < x;i++){
            if (y[i] == q[i]){
                check = true;
            }
            else{
                check = false;
                break;
            }
        }
        if (check == true){
            break;
        }
        else{
            continue;
        }
    }
    cout << "output is: ";
    for (int i = 0;i < L;i++){
        cout << output[i];
    }
}

