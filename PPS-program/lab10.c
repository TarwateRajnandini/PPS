#include <stdio.h>

// Function to determine the day of the week for Jan 1st of the given year (0=Sun, 1=Mon, ..., 6=Sat)
int getFirstDayOfYear(int year) {
    int d = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    return d;
}

int main() {
    int year, month, day, daysInMonth, startingDay, dayOfWeek;

    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter the year: ");
    scanf("%d", &year);

    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        monthDays[1] = 29;
    }

    startingDay = getFirstDayOfYear(year);

    for (month = 0; month < 12; month++) {
        daysInMonth = monthDays[month];

        printf("\n\n  ------------ %s %d ------------\n", months[month], year);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

         
        for (dayOfWeek = 0; dayOfWeek < startingDay; dayOfWeek++) {
            printf("     ");
        }

         
        for (day = 1; day <= daysInMonth; day++) {
            printf("%5d", day);

            if (++dayOfWeek > 6) {
                printf("\n");
                dayOfWeek = 0;
            }
        }

        
        startingDay = dayOfWeek;
    }
    printf("\n");

    return 0;
} 