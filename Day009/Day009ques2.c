// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.

#include <stdio.h>

void reverseString(char s[], int n) {
    int start = 0;
    int end = n - 1;

    while(start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char s[] = {'h','e','l','l','o'};
    int n = sizeof(s) / sizeof(s[0]);

    reverseString(s, n);

    for(int i = 0; i < n; i++) {
        printf("%c ", s[i]);
    }

    return 0;
}
