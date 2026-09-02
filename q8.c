#include <stdio.h>
int main() {
    int ts, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &ts);

    hours = ts / 3600;
    minutes = (ts % 3600) / 60;
    seconds = ts % 60;

    printf("Hours   = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    printf("Seconds = %d\n", seconds);
}
