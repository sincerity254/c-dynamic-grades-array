#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    //malloc() = a function in C that dynamically allocates a specified number of bytes in memory

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d",&number);

    char *grades = malloc(number * sizeof(char));//Calculates the total bytes needed so as malloc to request that amount of memory from the system(heap)
    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
        grades[i] = toupper(grades[i]);
    }

    
    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);//prints the outcome of the grades

    }


    free(grades);//Returning the borrowed memory to avoid memory leak
    grades = NULL;
    return 0;
}