#include <stdio.h>

/*prototype function*/
int  binarysearch(int arr[],int size,int search);

int main()
{
   int array[5];
   int i=0,search;
   int searchindex;


   /*enter the element in array by user*/
   for(i=0;i<5;i++)
    {

         printf("please,Enter the element:%d\n",i+1);
         scanf("%d",&array[i]);

   }

   /*ask the user a number to search*/
        printf("enter the search\n");
        scanf("%d",&search);


   /*return of binary search function*/
     searchindex=binarysearch(array,5,search);

    (searchindex == -1) ? printf("Element is not found"): printf("Element is at index %d",searchindex);


     return 0;
}



int  binarysearch(int arr[],int size,int search)
{
int start=0,end=size-1;
int middle=size/2;
int index=-1;

while(start<=end){

    if(arr[middle]==search){

        index=middle;
        break;

    }

    else if (arr[middle]>search){

        end=middle-1;

    }
    else  {

        start=middle+1;

    }

   middle= (start+end)/2;
}

     return index ;

}
