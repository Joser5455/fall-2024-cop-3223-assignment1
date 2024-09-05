// Jose Rivera
// UCFID: 5301735
// This program will calculate the width, height, perimeter, area and distance of a circle

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

// Primary function
int main(int argc, char **argv) {
    
    printf("Calculating Distance:\n");
    calculateDistance();
    
    printf("Calculating Perimeter:\n");
    calculatePerimeter();
    
    printf("Calculating Area:\n");
    calculateArea();

    printf("Calculating Height:\n");
    calculateHeight();

    printf("Calculating Width:\n");
    calculateWidth();
    
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    
    // Get the coordinates from the user
    printf("Enter x1, y1, x2, y2: ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    // Formula for distance
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    // Output the results
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    // return the double value 
    return distance;
}

double calculatePerimeter() {
    double width = calculateWidth();
    double height = calculateHeight();
    
    // Calculate perimeter; assume rectangle for simplicity
    double perimeter = 2 * (width + height);
    
    // Output the results
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 0;
}

double calculateArea() {
    double width = calculateWidth();
    double height = calculateHeight();
    
    // Calculate the area
    double area = width * height;
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 0;
}

double calculateWidth() {
    double x1, x2;
    
    // Get the x coordinates from the user
    printf("Enter x1, x2: ");
    x1 = askForUserInput();
    x2 = askForUserInput();
    
    double width = fabs(x2 - x1);
    
    // Output the results
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 0; 
}

double calculateHeight() {
    double y1, y2;
    
    // Get the y coordinates from the user
    printf("Enter y1, y2: ");
    y1 = askForUserInput();
    y2 = askForUserInput();
    
    double height = fabs(y2 - y1);
    
    // Output the results
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 0;
}

// Asks the user for specific coordinates
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value); 
    return value;
}
