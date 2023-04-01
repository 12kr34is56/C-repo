#include <stdio.h>
#include<string.h> //First include the header file in which "strcmp" function is defined which is used to compare two strings

int main(int argc, char const *argv[])
{
    char choice[50]; //No need to make 3 variables but make only one variable for strings which takes the choice of the user

    printf("Entter the subject u have passed :\n( mathsandscience, maths, science) :");

    scanf("%s",&choice);  //Notice here we have used %s for taking string as an input from the user

//Logic code: Comparing the entered choice using if else statements
    
    if (!(strcmp("mathsandscience", choice))){    //Notice: strcmp returns'0' when the compared strings are same, thus we have used NOT operator '!' for executing the block of the code
        printf("you will receive a gift worth 1000 rs");
    }
    else if( !(strcmp("maths",choice))){
    printf("you will receive a gift worth 700 rs");
    }
    else if (!(strcmp("science", choice))){
    printf("you will receive a gift worth 500 rs");
    }
    else{
    printf("sorry you are failed!");
    }

    return 0;
    }