#include <stdio.h>

int sumOfSquares(int a){
    int sum = 0;
    for(int i = 1; i <= a; i++){
        sum = sum + i*i;
    }

    return sum;
}

int squareOfSum(int b){
    int sum = 0;
    for(int i = 1; i <= b; i++){
        sum = sum + i;
    }
    sum = sum*sum;
    return sum;
}

int main(){
    int first = sumOfSquares(100);
    int sec = squareOfSum(100);
    int diff = sec - first;

    printf("%i\n", diff);
}