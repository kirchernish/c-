#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    unsigned int N;
    std::cin >> N;

    std::string hexN = "";
    unsigned int temp = N;
    while (temp > 0) {
        int remainder = temp % 16;
        if (remainder < 10) {
            hexN = char(remainder + '0') + hexN;
        } else {
            hexN = char(remainder - 10 + 'A') + hexN;
        }
        temp /= 16;
    }

    char maxDigit = '0';
    for (char digit : hexN) {
        if (digit > maxDigit) {
            maxDigit = digit;
        }
    }

    if (maxDigit >= '0' && maxDigit <= '9') {
        N *= 2;
    } else if (maxDigit == 'A' || maxDigit == 'D') {
        N = N / 10;
    } else if (maxDigit == 'B' || maxDigit == 'C') {
        std::string N_str = std::to_string(N);
        std::swap(N_str[0], N_str[N_str.length() - 1]);
        N = std::stoi(N_str);
    } else if (maxDigit == 'E') {
        N += 1;
    } else if (maxDigit == 'F') {
        int sumOfDigits = 0;
        temp = N;
        while (temp > 0) {
            sumOfDigits += temp % 10;
            temp /= 10;
        }
        N += sumOfDigits;
    }

    std::cout << N << std::endl;
    return 0;
}
