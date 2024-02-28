#include <stdio.h>
//prototype function
void QuickSort(int arr[],int start,int end);
int partition(int arr[],int start ,int end);

/************************************************/


int main(){

   int array[5];
   int i=0;

   for(i=0;i<5;i++)    //Ask user to add element
   {
        printf("enter the element of array%d:\n",i+1);
        scanf("%d",&array[i]);                //store element in array
   }


   QuickSort(array,0,4);     // call function to sort array

   for(i=0;i<5;i++)          // Loop to print element array
   {
       printf("%d\n",array[i]);
   }


    return 0;
}
/*****************************************************/
//Impelemention
void QuickSort(int arr[],int start,int end)
{
    if (start>=end)         //base case array is empty
    {
        return 0;
    }
    else
    {
        int middle=partition(arr,start,end);

                  QuickSort(arr,start,middle-1);          // Recursion quicksort function to sorted elements less than pivot
                  QuickSort(arr,middle+1,end);            // Recursion quicksort function to sorted elements greater than pivot


    }
}


/******************************************************************/
  int partition(int arr[],int start ,int end)
  {


      //Define variables
      int j=start;             //start of array
      int i=start-1;           //one less than beginning of array
      int temp;                // var to can swap element
      int pivot=arr[end];

      for(j=start;j<=end-1;j++)      //Loop to element of array
      {
          if(pivot>arr[j])
          {
              /*check element if small than pivot ,we will put it in the first */
              i++;
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;

          }


      }

            /*put pivot in the right position (middle) */
              i++;
              temp=arr[i];
              arr[i]=pivot;
              pivot=temp;

          return i;          // return the right position of pivot

    }

/********************************************************************/

