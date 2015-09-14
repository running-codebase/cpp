#include <stdio.h>

int main(){

int count = 0;

while (count<100) {

    if (count%5 == 0) {
        if (count%2 == 0 ) {  
            printf("Fizz Buzz\n");
        } else {
            printf("Fizz\n");
        }
    } else {
        printf("Buzz\n");
    }

    count ++;
}


 return 0;
}




