#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "construction.h"

void printStruct(struct Boba *tea)
{
    printf("Boba toppings: %s\nPrice: %lf\n", tea->topping, tea->price);
}

struct Boba * create_Boba(char t[50], double p)
{
    struct Boba *milktea; //creates an instance of struct called milktea

    milktea = malloc(sizeof(struct Boba)); //allocated heap memory

    strncpy(milktea->topping, t, sizeof(milktea->topping)-1); //copy t into topping but allocate one byte for NULL
    milktea->price = p; //put p into price

    return milktea;
}

void boba_topping(struct Boba *tea, char t[50]) //change the value of the topping data member
{
    strncpy(tea->topping, t, sizeof(tea->topping)-1);
}

void boba_price(struct Boba *tea, double p)
{
    tea->price = p;
}