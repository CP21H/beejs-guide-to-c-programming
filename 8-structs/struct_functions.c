struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float new_price) {
    // c.price = new_price // ERROR: Dot operator only works on struct
                           //        not pointers to structs
    (*c).price = new_price;
}

int main(void) {
    struct car saturn = {.speed=175, .name="Saturn SL/2"};

    set_price(&saturn, 799.99);

    printf("prICE: %f\n", saturn.price);
}