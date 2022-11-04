#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift) {
    int counter = 0;
    int ch = int(c);
    if(ch < 65 || (90 < ch && ch < 97) || ch > 122) {
        return char(ch);
    }
    while(counter < rshift) {
        if(ch == 90) {
            ch = 64;
        }
        if(ch == 122) {
            ch = 96;
        }
        ch++;
        counter++;
    }
    return char(ch);
}

std::string encryptCaesar(std::string plaintext, int rshift) {
    int counter = 0;
    std::string encryptedStr = "";
    while(counter < plaintext.length()) {
        encryptedStr += shiftChar(plaintext[counter], rshift);
        counter++;
    }
    return encryptedStr;
}

char decryptShift(char c, int rshift) {
    int counter = 0;
    int ch = int(c);
    if(ch < 65 || (90 < ch && ch < 97) || ch > 122) {
        return char(ch);
    }
    while(counter < rshift) {
        if(ch == 65) {
            ch = 91;
        }
        if(ch == 97) {
            ch = 123;
        }
        ch--;
        counter++;
    }
    return char(ch);
}

std::string decryptCaesar(std::string ciphertext, int rshift) {
    int counter = 0;
    std::string decryptedString;
    while(counter < ciphertext.length()) {
    decryptedString += decryptShift(ciphertext[counter], rshift);
    counter++;
    }
    return decryptedString;
}

