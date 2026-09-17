#include <stdio.h>
int main() {
    char password[100];
    int length = 0;
    int has_upper = 0, has_lower = 0, has_digit = 0;
    printf("=== Password Strength Checker ===\n");
    printf("Enter a password to test (no spaces): ");
    scanf("%s", password);
    for(int i = 0; password[i] != '\0'; i++) {
        length++;
        if(password[i] >= 'A' && password[i] <= 'Z')
            has_upper = 1;
        if(password[i] >= 'a' && password[i] <= 'z')
        has_lower = 1;
        if(password[i] >= '0' && password[i] <= '9')
        has_digit = 1;
    }
    printf("\n--- Results ---\n");
    printf("Length: %d characters\n", length);
    if(length >= 8 && has_upper && has_lower && has_digit) {
        printf("Strength: STRONG\n");
    } else if(length >= 6 && (has_upper || has_lower) && has_digit) {
        printf("Strength: MODERATE\n");
    } else {
        printf("Strength: WEAK (Tip: Use 8+ characters, mixed case, and numbers)\n");
    }
    return 0;
}
