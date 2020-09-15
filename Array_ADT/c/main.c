# include <stdio.h>


struct Array
{
    //A is for creating array rest of things are info about the array
    int A[20];
    int size;
    int length;

};


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




