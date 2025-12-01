/*
Name: Abdur Rahim Pavaskar
UTN: 251N043
class: FE/Mechanical
Div: F
*/
#include <stdio.h>

int main() {
    float physics, chemistry, math, average;

    // Get marks from the user
    printf("Enter Physics marks: ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);

    printf("Enter Math marks: ");
    scanf("%f", &math);

    // Calculate the average
    average = (physics + chemistry + math) / 3.0;

    // Print the average
    printf("The average PCM marks are: %.2f\n", average);

    // Use a conditional operator to check eligibility and print the result
    (average >= 50) ? printf("Student Is Eligible For Admission.\n") : printf("Student Is Not Eligible For Admission.\n");

return 0;
}
