#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box* boxPtr) {
    double topBottom = 2 * (boxPtr->length * boxPtr->width);
    double frontBack = 2 * (boxPtr->length * boxPtr->height);
    double leftRight = 2 * (boxPtr->width * boxPtr->height);

    return topBottom + frontBack + leftRight;
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &(boxPtr->length));

    printf("Enter the width of the box: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%lf", &(boxPtr->height));

    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

    return 0;
}

