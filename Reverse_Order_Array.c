# include<stdio.h>
int main(){
    int arr[5];
    int i;
    printf("Enter 5 elements in the Array:\n");
    for (i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf ("Array in Reverse order:\n");

    for (i=4; i>=0; i--)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}