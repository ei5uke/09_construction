struct Boba //creates the struct
{
    char topping[50];
    double price;
};

void printStruct(struct Boba *tea);

struct Boba * create_Boba(char t[50], double p);

void boba_topping(struct Boba *tea, char t[50]);

void boba_price(struct Boba *tea, double p);