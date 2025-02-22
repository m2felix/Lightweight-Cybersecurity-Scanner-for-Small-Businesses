# include <stdio.h> // Standard input output
# include <stdlib.h> // Standard library

int main() {
    char ip[20]; // The place to store the IP adress
    printf("Enter an IP address: ");
    scanf("%19s", ip); //Read user input (limited to 19 characters)
    // "scanf" or "fgets" is a function in C used to read user input. However "scanf can't read spaces".

    printf("You entered: %s\n", ip); //192.168.1.1
    return 0;
}
