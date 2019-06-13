#include "serialize.hpp"

void * serialize(void) {
    char arr[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char arrn[11] = "0123456789";
    std::string *str;
    int i = 0;

    while(i != 8) {
        srand(time(NULL));
        int j = rand() % 53;

        str += arr[j];
        i++;
    }

    i = 0;
    while(i != 4) {
        srand(time(NULL));
        
    }
}