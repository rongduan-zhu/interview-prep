/* check for palindrome */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *string;

int is_palindrome(string word) {
    if (word == NULL) {
        return 0;
    }

    int start = 0;
    int end = strlen(word) - 1;

    while (start < end) {
        if (word[start++] != word[end--]) {
            return 0;
        }
    }

    return 1;
}

void print_testcase(string test) {
    printf("%s is %spalindrome\n", test, is_palindrome(test) ? "" : "not ");
}

int main(int argc, char *argv[]) {
    print_testcase("hello world");
    print_testcase("abcb");
    print_testcase("");
    print_testcase("a");
    print_testcase("aaa");
    print_testcase("ab12321ba");

    return 0;
}
