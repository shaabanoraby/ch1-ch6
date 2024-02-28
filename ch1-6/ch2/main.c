#include <stdio.h>

// Function to perform selection sort on an array
void selectionsort(int arr[],int size);

   

int main()
{
    int arr[5]; // Declare and initialize the array

    for(int i=0;i<5;i++)  //ask user to add element
      {
        printf("please,enter the element %d:\n",(i+1));
        scanf("%d",&arr[i]);

      }

    selectionsort(arr,5);       // Call selectionsort function to sort the array

    printf("element after sorting\n");


    for (int i = 0; i < 5; i++)
     {
                                   // Iterate over the sorted array and print its elements
        printf("%d\n", arr[i]);

     }

    return 0;                    // Return 0 to indicate successful execution
}
 void selectionsort(int arr[],int size){
 /*Define variables*/
    int smallest = arr[0]; // Initialize smallest value to the first element
    int small_index = 0;   // Initialize index of smallest value to 0
    int i, j, temp;        // Declare loop variables and temporary variable for swapping

    // Iterate over the array
    for (i = 0; i < size; i++) {
        // Update the index of the smallest value

        small_index = i;

        // Find the index of the smallest element in the unsorted portion of the array
        for (j = i + 1; j < size; j++)
         {
            if (arr[j] < arr[small_index])
            {
                small_index = j;
            }
        }


        // Swap the current element with the smallest element found
        temp = arr[small_index];
        arr[small_index] = arr[i];
        arr[i] = temp;
    }

}