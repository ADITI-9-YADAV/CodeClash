#include <iostream>
#include<string>
int main() {
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        if (x % 10 == 0 && x != 0) {
            return false;
        }

        int reversedNumber = 0;

        while (x > reversedNumber) {
            int digit = x % 10;
            reversedNumber = reversedNumber * 10 + digit;
            x /= 10;
        }

        return x == reversedNumber || x == reversedNumber / 10;
    }
}