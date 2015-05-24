/* write a function in C that will verify if an IPv4 address is correct or not. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_UNIT_LEN 3
#define BUFFER_SIZE 16
#define MIN_LEN 7

typedef char *string;

int is_valid_ip(string ip) {
    if (ip == NULL || strlen(ip) >= BUFFER_SIZE || strlen(ip) < MIN_LEN) {
        return 0;
    }

    char buffer[BUFFER_SIZE];
    int count = 0;
    int segment;

    strcpy(buffer, ip);
    string token = strtok(buffer, ".");
    while (token != NULL) {
        segment = atoi(token);

        if (0 <= segment && segment <= 255) {
            count++;
        } else {
            return 0;
        }

        token = strtok(NULL, ".");
    }

    return count == 4;
}

int main(int argc, char *argv[]) {
    printf("%d\n", is_valid_ip("10.1.1.1"));
    printf("%d\n", is_valid_ip("0.0.0.0"));
    printf("%d\n", is_valid_ip("0.1.2.3"));
    printf("%d\n", is_valid_ip("0.0.0"));
    printf("%d\n", is_valid_ip(""));
    printf("%d\n", is_valid_ip("192.168.001.001"));
    printf("%d\n", is_valid_ip("255.255.255.255"));
    printf("%d\n", is_valid_ip("255.254.255.0.1"));

    return 0;
}
