#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "construction.h"

int main()
{
    srand(time(NULL)); //randomize

    struct Boba *mango;
    mango = create_Boba("oreos", rand());
    printStruct(mango);

    boba_topping(mango, "sprinkles");
    printStruct(mango);

    boba_price(mango, rand());
    printStruct(mango);

    return 0;
}