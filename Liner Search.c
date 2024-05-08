#include<stdio.h>
#include<conio.h>
int main(){

int array[10] = {10,11,12,13,15,17,18,19,20,22};

int size = sizeof(array);

int target;
printf("Enter any value : ");
scanf("%d",&target);

for(int i=0; i<size; i++){

        if(target==array[i]){

            printf("Your value found at index %d",i);
            return;
        }

}
printf("Your value not found");

getch();
}

