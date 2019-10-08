#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums, i, j, temp;
    int arr[25];
    printf("How many numbers do you want to reverse: ");
    scanf("%d", &nums);
    printf("Enter numbers: ");
    for(i=0;i<nums;i++){
        scanf("%d", &arr[i]);
    }
    for (i=0;i<nums-1;i++){
        for (j=0;j<nums-1-i;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    printf("Reversed: ");
    for (i=0;i<nums;i++){
        printf("%d ",arr[i]);
  }
}
