#include <stdio.h>
#include <math.h>

// Function to calculate the perimeter of a triangle
float calculateTrianglePerimeter(float side1, float side2, float side3) {
    return side1 + side2 + side3;
}

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the perimeter of a square
float calculateSquarePerimeter(float side) {
    return 4 * side;
}

// Function to calculate the area of a square
float calculateSquareArea(float side) {
    return side * side;
}

// Function to calculate the perimeter of a rectangle
float calculateRectanglePerimeter(float length, float width) {
    return 2 * (length + width);
}

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the perimeter of a circle
float calculateCirclePerimeter(float radius) {
    return 2 * M_PI * radius;
}

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    return M_PI * radius * radius;
}

int main() {
    int choice;
    float side1, side2, side3, base, height, length, width, radius;

    printf("1. Triangle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the lengths of the three sides of the triangle: ");
            scanf("%f %f %f", &side1, &side2, &side3);
            printf("Perimeter: %.2f\n", calculateTrianglePerimeter(side1, side2, side3));
            printf("Area: %.2f\n", calculateTriangleArea(base, height));
            break;
        case 2:
            printf("Enter the length of a side of the square: ");
            scanf("%f", &side1);
            printf("Perimeter: %.2f\n", calculateSquarePerimeter(side1));
            printf("Area: %.2f\n", calculateSquareArea(side1));
            break;
        case 3:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Perimeter: %.2f\n", calculateRectanglePerimeter(length, width));
            printf("Area: %.2f\n", calculateRectangleArea(length, width));
            break;
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Perimeter: %.2f\n", calculateCirclePerimeter(radius));
            printf("Area: %.2f\n", calculateCircleArea(radius));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
