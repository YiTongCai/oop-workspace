#include <iostream>
void count_digits(int array[4][4]){
    int count[10] = {0};
     for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            int n = array[i][j];
            count[n]++;
        }  
    }
    for (int m = 0; m < 10; ++m){
        std::cout << m << ":" << count[m] <<std::endl;
    }    
}