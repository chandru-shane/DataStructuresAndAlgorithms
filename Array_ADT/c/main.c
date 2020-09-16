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

int main(){
    struct Array arr={{1,2,3,4,5}, 20, 5};
   
    Display(arr);
    return 0;
}




