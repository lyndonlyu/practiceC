#include <stdio.h>

//converting HEX to BIN 
//situation1
//input AB(HEX)
//expecting print output to console 10101011

int main() {

        char combineInput[3] = {'5', 'B', '\0'};
        int newbie = 0;
        int finalDEC = 0;

        printf("number 0 is actually 48 in ascii \n");
        printf("number 1 is actually 49 in ascii \n");
        printf("number 2 is actually 50 in ascii \n");
        printf("... \n");
        printf("number 9 is actually 57 in ascii \n\n");


        printf("A is actually 65 in ascii \n");
        printf("(we want A to be 10) \n");
        printf("B is actually 66 in ascii \n");
        printf("(we want B to be 11 )\n");
        printf("C is actually 67 in ascii \n");
        printf("(we want C to be 12) \n");
        printf("... \n");
        printf("F is actually 70 in ascii \n");
        printf("(we want F to be 15) \n");

        printf("so there are two type of input which result in two type of situation \n");
        printf("if the input is number, we should minus 48 \n");
        printf("if the input is a letter, we should minus 55 \n");

        for (int i = 0; i < 2; i++) { //check array

                if ((combineInput[i]<='9')  &&  (combineInput[i]>='0')) {//is a number

                        combineInput[i]=combineInput[i]-48;

                } else if ((combineInput[i]<='F')  &&  (combineInput[i]>='A')) {//is  a letter

                        combineInput[i]=combineInput[i]-55;

                } else {

                        printf("smething went wrong \n");
                }

        }

        finalDEC=( (combineInput[0]<<4)   |   (combineInput[1]) );
        printf("the final result in DEC is %d \n", finalDEC  );
        printf("All we nee to do is print out this in Binary \n");

//then you can find any way you like to turn DEC to BIN (10 to 2)


        return 0;
}
