#include<stdio.h>

int main() {
    int i,x,a[100],p,n;

    printf("How many numbers: ");
    scanf("%d",&x);

    for(i=0;i<x;i++) {
        printf("Enter %dth number: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(i=0;i<x;i++) {
        printf("%d ",a[i]);
    }
    printf("\nEnter index of new element: ");
    scanf("%d",&p);
    printf("Enter new element: ");
    scanf("%d",&n);
    for(i=x+1;i>p;i--) {
        a[i] = a[i-1];
    }
    a[p] = n;
    printf("The updated array is: ");
    for(i=0;i<x+1;i++) {
        printf("%d ",a[i]);
    }
}