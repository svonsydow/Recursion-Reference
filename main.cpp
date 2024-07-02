#include <iostream>
#include <stdio.h>

using namespace std;

//recursion function
void Recursion(int num) {

    int hexnum = 0;
    //if num is Null, program will end.
    if (num == NULL)
        return;
        //if not Null, recursion function will divide num by base value 16(0-9,A-F)
    else {
        hexnum = num % 16;
        Recursion(num / 16);
    }
    //if hexnum is less than 9, print 1-9. 0 will end program;
    if (hexnum > 9)
        printf("%c", 'A' + (hexnum - 10));
        //else, print integer input in hexadecimal based on decimal integer(%d).
    else
        printf("%d", hexnum);
}
int main(){

    int userInput;
    printf("Enter a whole number: ");
    //read input from user. Recursion function converts user input from an integer to a hexadecmial value.
    scanf("%d", &userInput);
    Recursion(userInput);

    return 0;
}