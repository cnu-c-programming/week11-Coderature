#include <stdio.h>
 
enum Color { RED, GREEN, BLUE};
enum Status { OK = 0, ERR =-1, BUSY = 1 };
 
int main(void) { 
    printf("RED   =  %d\n", RED);
    printf("GREEN =  %d\n", GREEN);
    printf("BLUE  = %d\n\n", BLUE);
 
    printf("OK    =  %d\n", OK);
    printf("ERR   =  %d\n", ERR);
    printf("BUSY  =  %d\n", BUSY);
 
    return 0;
}
 