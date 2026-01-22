#include <stdio.h> 
#include <math.h>


float calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void) {
    int x1, y1, x2, y2;
    float distance;
    
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    
     distance = calculateDistance(x1, y1, x2, y2);
    
    printf("The distance between the points (%d, %d) and (%d, %d) is approximately %f units\n", x1, y1, x2, y2, distance);
    
    return 0;
}
