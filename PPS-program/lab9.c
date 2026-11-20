#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    
    printf("Enter source file name: ");
    scanf("%s", sourcePath);
    printf("Enter destination file name: ");
    scanf("%s", destPath);

     
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Unable to open source file '%s'.\n", sourcePath);
        exit(1);
    }

     
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Unable to open destination file '%s'.\n", destPath);
        fclose(sourceFile);
        exit(1);
    }

    
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourcePath, destPath);

    
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
 