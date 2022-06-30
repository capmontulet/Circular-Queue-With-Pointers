#include<stdio.h>

#define ARSZ 10

int main(void){
	int array[ARSZ]={0}, new = ARSZ -1,old = ARSZ -1, total = 0, maxValues = 0, aveOverNValues = 0, newValue = 0;
    int *pOld= &old, *pNew = &new, *pArray = array;
    printf("Enter the number of values to be averaged over: ");
    scanf("%d", &maxValues);
    while(1){
    printf("\nEnter a new Value: ");
    scanf("%d", &newValue);
    *pNew = (++new)%ARSZ;
    total += newValue;
    *(pArray+*pNew)= newValue;
    if(++numCtr<=maxValues){
        ++aveOverNValues;
    }else{
        *pOld = (++old)%ARSZ;
        total -= *(pArray+*pOld);
    }
    printf("Buffer Contents: ");
    for(int i=0;i<ARSZ;i++) {
        printf("%d ", *(pArray+i)); 
    }
    printf("\nNumber of values entered: %i\tAverage over: %i\t\tAverage: %.2f",numCtr,aveOverNValues,(float)total/aveOverNValues);
    }
}
