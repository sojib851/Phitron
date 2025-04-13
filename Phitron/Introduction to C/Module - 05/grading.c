#include <stdio.h>

int main(){

    int marks;
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100){

        printf("You Have Passed\n");

        if(marks >= 80 && marks <= 100){
            printf("Your Grade is (A+), & Marks = %d\n", marks);
            if(marks >= 95 && marks <= 100){
                printf("Congratulations, You Are The Top & You Have A Scolarship");
            }
        }
        else if(marks >= 70 && marks <= 79){
            printf("Your Grade is (A), & Marks = %d\n", marks);
        }
        else if(marks >= 60 && marks <= 69){
            printf("Your Grade is (A-), & Marks = %d\n", marks);
        }
        else if(marks >= 50 && marks <= 59){
            printf("Your Grade is (B), & Marks = %d\n", marks);
        }
        else if(marks >= 40 && marks <= 49){
            printf("Your Grade is (C), & Marks = %d\n", marks);
        }
        else if(marks >= 33 && marks <= 39){
            printf("Your Grade is (D), & Marks = %d\n", marks);
        }
        else if(marks >= 0 && marks <= 32){
            printf("Your Grade is (F), & Marks = %d\n", marks);
        }
    }
    else if(marks >= 0 && marks <= 32){
        printf("You are The Fail Try Again, & Marks = %d\n", marks);
    }
    else{
        printf("Unvalid Number %d\n", marks);
    }
    

    return 0;
}