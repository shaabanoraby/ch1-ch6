#include <stdio.h>
#define SIZE   10
//prototype functions
int Hash_function(int key);
void Initialize(void);
void Insert(int key , int value);
int Search(int key );
void Remove(int key);



typedef struct hash_table{       // Define node struct to store key and value
 int key;
 int value;
}hash;


/*Define the pointer to the hash table*/
hash* HashTable[SIZE];

/**********************************************************************/

int main()
{

   Initialize();                //Initial hash table

   Insert(2,5);                  // Insert new node

   Insert(1,4);                  //Insert new node

    for(int i=0;i<SIZE;i++)
    {

        if(!(HashTable[i]==NULL))

        {

            printf("The key is %d \nThe value is %d\n",HashTable[i]->key,HashTable[i]->value);

        }

    }

    int index = Search(1);                    //Call search function

    if (index != -1)
    {
        printf("Value found: %d\n", index);

    }
     else
    {
        printf("Key not found\n");
    }



    return 0;
}


/***********************************************************************/

//Impelementations
void Initialize(void)
{

  /*Reserve number of nodes equal to the capacity*/
	*HashTable = (hash *) malloc(SIZE * sizeof(hash));
    /*Intialize hashtable*/
    for (int i = 0; i < SIZE; i++)
    {
        HashTable[i] = NULL;
    }

}


/***********************************************************************/
int Hash_function(int key)
{
  /*Return the value of the hash function of the key*/

 return key % SIZE;

}


/**********************************************************************/

void Insert(int key , int value)
{
    int hash_index=Hash_function(key);             //Get the hash value for the key

    if (HashTable[hash_index]==NULL)
    {
        // Allocate memory for new node
        HashTable[hash_index] = (hash*)malloc(sizeof(hash));

        if (HashTable[hash_index] == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }
        else
        {
            HashTable[hash_index]->key=key;
            HashTable[hash_index]->value=value;
        }

    }

    else if (HashTable[hash_index]->key==key)     /*Else if the key is not empty, update its value with the new value*/
    {

           HashTable[hash_index]->value=value;
    }

    else                                         /*Else the key hash value is in collision with another reserved key, do nothing*/
    {

          printf("Collision occured\n");
    }

}

/******************************************************************************/

int Search(int key)
{
   int hash_index=Hash_function(key);          /*Get the hash value for the key*/

   if (!(HashTable[hash_index]==NULL)&&(HashTable[hash_index]->key==key))        // IF , node is removed or not
   {
       return HashTable[hash_index]->value;
   }

   else
   {
      return -1;                    // not found
   }

}


/***********************************************************************/


void Remove(int key)
{

    int hash_index=Hash_function(key);            /*Get the hash value for the key*/

    if (!(HashTable[hash_index]==NULL) && HashTable[hash_index]->key==key)      //remove the node from hash table
      {

            HashTable[hash_index]->key==0;
            HashTable[hash_index]->value==0;

      }

    else
    {

        printf("key not found\n");       /*If the key does not exist, tell the user*/

    }


}


/**************************************************************************/
