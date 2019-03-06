//
//  main.cpp
//  sosuu
//
//  Created by 野原将人2 on 2019/03/06.
//  Copyright © 2019 野原将人2. All rights reserved.
//

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
    // insert code here...
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
