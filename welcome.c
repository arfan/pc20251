#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    const char correct_username[] = "user";
    const char correct_password[] = "pass";

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && 
        strcmp(password, correct_password) == 0) {
        printf("Welcome!\n");
    } else {
        printf("Error: Incorrect username or password.\n");
    }
    return 0;
}
