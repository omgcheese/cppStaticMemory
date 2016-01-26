//
//  main.cpp
//  cppStaticMemory
//
//  Created by Jinwook Lee on 2016-01-25.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int hasStatic(int n) {
    static int x = 0;
    //static declaration in a function but initialized only once when a program runs
    x += n;
    return x;
}

int main() {
    // insert code here...
    int sum = 0;
    for(int i = 1; i <= 4 ; i++){
        sum += hasStatic(i);
        cout << sum << endl;
    }
    printf("Result of sum is %d.\n",sum);
    return 0;
}
