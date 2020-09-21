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

int BinarySearch(struct Array a, int key){
    int l, h, mid;
    l = 0;
    h = a.length - 1 ;
    while (l<=h)
    {
        mid = (l+h)/2;
        if(a.A[mid] == key){
            return mid;
        }
        else if (key < a.A[mid])
        {
            h =mid-1;
        }
        else
        {
            l = mid+1;
        }
        
        

    }
    return -1;
}

int RBinSearch(int a[], int l, int h, int key){
    
    int mid;
    if(l <= h){
        mid = (l+h)/2;

        if (key == a[mid]){
            return mid;
        }

        else if (key < a[mid])
        {
           return RBinSearch(a, l, mid-1, key);
        }
        else
        {
           return RBinSearch(a, mid+1, h, key);
        }
        
        
    }

    return -1;
}

int Get(struct Array arr, int index){
    if (index >= 0 && index <= arr.length){
        return arr.A[index];
    }
    return -1;
}

int Set(struct Array *arr, int index, int value){
    if (index >= 0 && index <= arr->length){
        arr->A[index] = value;
    }
}

int Max(struct Array arr){
    int max = 0;
    int i;
    for (i=0; i < arr.length; i++){
        if(max < arr.A[i]){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    int min = 0;
    int i;
    for (i=0; i < arr.length; i++){
        if (min > arr.A[i]){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int sum = 0;
    int i;
    for (i=0; i<arr.length; i++){
        sum += arr.A[i];
        }
    return sum;
}

float Avg(struct Array arr){
    return (float) Sum(arr)/arr.length;
    }

int main(){
    struct Array arr={{1,2,3,4,5}, 20, 5};
   
    // printf("%d\n", RBinSearch(arr.A,0, arr.length - 1,  20));
    // printf("%d \n", BinarySearch(arr, 8));
    // printf("%d", Set(&arr, 1, 100));
    // printf("%d\n", Min(arr));
    printf("%f\n", Avg(arr));
    Display(arr);
    return 0;
}




