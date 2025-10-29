//WAP to calculate the area and circumfrance of circle

# include<stdio.h>

int main(){
    float radii;
    printf("the radii is\n");
    scanf("%f",&radii);
    printf("the area is %.2f",3.14*radii*radii);
    printf("\nthe circumfrance of circle is %.2f",2*3.14*radii);
    return 0;
}