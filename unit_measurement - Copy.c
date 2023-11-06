#include <stdio.h>

int main() {
    int choice;
    double value, convertedValue;

    // This is the welcoming massage for the user
    printf("Welcome to the Measurement Converter Program!\n");
    printf("Please selecting from the following below the menu \n\n");

    do {
        // menu option is displayed and provides user multiple choices to select from
        printf("\nMeasurement Menu:\n");
        printf("1. Length\n");
        printf("2. Weight\n");
        printf("3. Temperature\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        // Read input from the user's choice from the menu
        scanf("%d", &choice);

// STOPPED HERE CONTINUE TO WORK ON THE COMMENTS

        // Use a switch statement to handle the choice
        switch (choice) {
            case 1:
                printf("Length Measurement Menu:\n");
                printf("1. Meters to Feet\n");
                printf("2. Feet to Meters\n");
                printf("3. Inches to Meters\n");
                printf("4. Meters to Inches\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                printf("Enter the value: ");
                scanf("%lf", &value);

                switch (choice) {
                    case 1:
                        convertedValue = value * 3.28084;
                        printf("%.2f meters is equal to %.2f feet.\n", value, convertedValue);
                        break;
                    case 2:
                        convertedValue = value / 3.28084;
                        printf("%.2f feet is equal to %.2f meters.\n", value, convertedValue);
                        break;
                    case 3:
                        convertedValue = value / 39.3701;
                        printf("%.2f inches is equal to %.2f meters.\n", value, convertedValue);
                        break;
                    case 4:
                        convertedValue = value * 39.3701;
                        printf("%.2f meters is equal to %.2f inches.\n", value, convertedValue);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 2:
                printf("Weight Measurement Menu:\n");
                printf("1. Kilograms to Pounds\n");
                printf("2. Pounds to Kilograms\n");
                printf("3. Grams to Kilograms\n");
                printf("4. Kilograms to Grams\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                printf("Enter the value: ");
                scanf("%lf", &value);

                switch (choice) {
                    case 1:
                        convertedValue = value * 2.20462;
                        printf("%.2f kilograms is equal to %.2f pounds.\n", value, convertedValue);
                        break;
                    case 2:
                        convertedValue = value / 2.20462;
                        printf("%.2f pounds is equal to %.2f kilograms.\n", value, convertedValue);
                        break;
                    case 3:
                        convertedValue = value / 1000;
                        printf("%.2f grams is equal to %.2f kilograms.\n", value, convertedValue);
                        break;
                    case 4:
                        convertedValue = value * 1000;
                        printf("%.2f kilograms is equal to %.2f grams.\n", value, convertedValue);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 3:
                printf("Temperature Measurement Menu:\n");
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                printf("Enter the value: ");
                scanf("%lf", &value);

                switch (choice) {
                    case 1:
                        convertedValue = (value * 9 / 5) + 32;
                        printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", value, convertedValue);
                        break;
                    case 2:
                        convertedValue = (value - 32) * 5 / 9;
                        printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", value, convertedValue);
                        break;
                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                }
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4); // Continue the loop until the user selects "Exit" (option 4)

    return 0;
}








