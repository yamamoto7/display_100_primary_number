#include <iostream>
using namespace std;
bool is_sosuu(int n){
    for (int k(2); k < n ;k++){
        if (n % k == 0) {
            return false;
        }
    }
    return true;
}
int main(int argc, const char * argv[]) {
    int i(0),n(1);
    while (i <= 100){
        if (is_sosuu(n)){
            i++;
            cout << n << ",";
        }
        n++;
    }
    return 0;
}
