// Create a 2-d array by taking input from the user. Write a display function to 
// print the content of this 2-d array on the screen.

#include <stdio.h>

int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for array[%d][%d]\n", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}