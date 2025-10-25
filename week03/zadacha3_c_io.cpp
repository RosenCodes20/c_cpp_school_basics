#include <cstdio>

int main() {
    int length;
    int width;
    
    printf("Enter length:");
    scanf("%d", &length);
    
    printf("Enter width:");
    scanf("%d", &width);
    
    int perimeter = 2 * length + 2 * width;
    int area = length * width;
    
    printf("Area is: %d\n", area);
    printf("Parameter is: %d", perimeter);
    
}