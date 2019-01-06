/* *
 * @created : 26th December, 2018
 * @author : iphilip
 * 
 * Program demonstrating macro function to calculate Area of Circle
 * 
 * */
 
 #include <stdio.h>

 #define PI 3.14
 #define circleArea(r) (PI*r*r)
 #define newline printf("\n");
 

int main(){
    int radius;
    float area;
    printf("Enter the radius : ");
    scanf("%d", &radius);
    area = circleArea(radius);
    printf("Area = %2.f", area);
    newline

    return 0;
}