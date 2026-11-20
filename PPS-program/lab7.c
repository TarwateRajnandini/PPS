#include <stdio.h>

 
struct Student {
    int rollNo;
    char name[50];
    int sub1, sub2, sub3; 
    int total;
    float percentage;
};

int main() {
    int n;
    struct Student s[50];

    // Taking number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

     
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter Roll No, Name, and Marks of 3 subjects: ");
        scanf("%d %s %d %d %d", &s[i].rollNo, s[i].name, &s[i].sub1, &s[i].sub2, &s[i].sub3);

        // Calculating total and percentage
        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].percentage = s[i].total / 3.0;
    }

    
    printf("\n--------------------------------------------------------------------------\n");
    printf("Roll No\tName\t\tSubject 1\tSubject 2\tSubject 3\tTotal\tPercentage\n");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%-10s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n",
               s[i].rollNo, s[i].name, s[i].sub1, s[i].sub2, s[i].sub3, s[i].total, s[i].percentage);
    }

    return 0;
}
 