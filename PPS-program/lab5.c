#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, result;

     
    printf("--- String Operations (Using In-built Functions) ---\n");
    printf("1. String Length (strlen)\n");
    printf("2. String Copy (strcpy)\n");
    printf("3. String Concatenation (strcat)\n");
    printf("4. String Comparison (strcmp)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length of string '%s' is = %lu\n", str1, strlen(str1));
            break;

        case 2:
            printf("Enter source string: ");
            scanf("%s", str1);
            strcpy(temp, str1);
            printf("Copied string is = %s\n", temp);
            break;

        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated string is = %s\n", str1);
            break;

        case 4:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            result = strcmp(str1, str2);
            if (result == 0) {
                printf("Both strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}
 