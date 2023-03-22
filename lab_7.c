#include <stdio.h>

//this is the swap function used in bubble sort
//it uses pointers to keep track of the intergers that will be swapped
void swap (int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//bubble sort is used to take the array given and sort it from smallest to largest
void bubbleSort(int array[], int n) {
    int i, j, swaps;
    
    //the for loops are used to  traverses the array
    for (i = 0; i < n-1; i++) {
        swaps = 0;
        for (j = 0; j < n-i-1; j++) {
            //the if statement is for when the current number is larger than the one next to it
            if (array[j] > array[j+1]) {
                //swap is called to swap the numbers 
                swap(&array[j], &array[j+1]);
                //swap is incremented to keep count of how many swaps happen
                swaps++;
            }
        }
        //print the pass number and the amount of swaps 
        printf("Pass %d: %d swaps\n", i+1, swaps);
    }
}


int main() {
    //the array given with 9 total numbers 
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    //this part calls the bubblesort function above to sort the array of 9 numbers 
    bubbleSort(array, 9);
    //returns 0 for good practice 
    return 0;
}


/*
pass 1   8 swaps
pass 2   4 swaps
pass 3   3 swaps
pass 4   2 swaps
pass 5   1 swaps
pass 6   1 swaps
pass 7   0 swaps
pass 8   0 swaps
*/