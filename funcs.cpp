#include <iostream>
#include <cmath>
#include "funcs.h"
#include "caesar.h"

void countFreq(double frequency[], std::string text) {
    int counter = 0;
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for(int i = 0; i < 27; i++){
        for(int q = 0; q < text.length(); q++) {
            if(alphabet[i] == text[q]) {
                counter++;
            }
        }
        frequency[i] = counter/((double)(text.length()));
        counter = 0;
    }
}

double distanceForm(double frequency[]) {
    double letterFreq[26] = {0.082, 0.015, 0.028, 0.043, 0.13, 0.022, 0.02, 0.061, 0.07, 0.0015, 0.0077, 0.04, 0.024, 0.067, 0.075, 0.019, 0.00095, 0.06, 0.063, 0.091, 0.028, 0.0098, 0.024, 0.0015, 0.02, 0.00074};
    double total = 0;
    for(int i = 0; i < 27; i++) {
        total += pow(frequency[i] - letterFreq[i], 2);
    }
    return sqrt(total);
}

std::string solve(std::string encrypted_string) {
    std::string encryptText = encrypted_string;
    std::string decryptText;
    std::string smallDecrypt;
    double* frequency = new double[26];
    double small = 999999999;
    double distance;
    for(int i = 1; i < 27; i++) {
        decryptText = decryptCaesar(encryptText, i);
        countFreq(frequency, decryptText);
        distance = distanceForm(frequency);
        if(small > distance) {
            small = distance;
            smallDecrypt = decryptText;
        }
    }
    return smallDecrypt;
}
