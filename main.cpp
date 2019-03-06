#include <iostream>
using namespace std;

int sosuu(int n){
    int result = 0;
    for (int k(2); k < n ;k++){
        if (n % k == 0) {
            result = 1;
        }
    }
    return result;
}

int main(int argc, const char * argv[]) {
    int i(0),n(1);
    while (i < 100){
        if (sosuu(n) != 1){
            i++;
            cout << n << endl;
        }
        n++;
    }
    return 0;
}
