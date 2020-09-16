# include <stdio.h>


struct Array
{
    //A is for creating array rest of things are info about the array
    int A[20];
    int size;
    int length;

};

void Append(struct Array *arr, int x)
{
    if(arr->length < arr ->size)
    {   
      
        arr->A[arr->length++] = x;
        
    }
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index >= 0 && index <= arr-> length){
        for( i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        
    }
}


void Display(struct Array arr)
{
    int i;
    printf("\nElements are \n");
    for (i=0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

int Delete(struct Array *arr, int index){
    int i;
    int x = 0;

    if(index >= 0 && index <= arr->length){
        x = arr->A[index];
        for(i=index; i < arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key)
{
 int i;
 for(i=0; i<arr-> length; i++){
     if(key==arr->A[i]){
         
        //  swap(&arr->A[i], &arr->A[i-1]); //This is transposition method
        swap(&arr->A[i], &arr->A[0]); //This is Move to front/Head method
         return i;
     }
     
 }
 return -1;
}

int main(){
    struct Array arr={{1,2,3,4,5}, 20, 5};
   
    printf("%d\n", LinearSearch(&arr,4));
    Display(arr);
    return 0;
}




