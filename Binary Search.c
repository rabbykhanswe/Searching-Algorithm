#include<stdio.h>
#include<conio.h>

void binary_search(int arr[],int size,int target){

int low=0;
int high=size;

//while(low<=high)
for(int i=0; i<size; i++){

    int mid=(low+high)/2;

    if(arr[mid]==target){
        printf("Your value found");
        return;
    }

    else if(arr[mid]<target){
        low=mid+1;
    }

    else{
        high=mid-1;
    }
}
printf("Your value not found");

}


int main(){

int array[10] = {10,11,12,13,15,17,18,19,20,22};

int lenth = sizeof(array);

int target;

printf("Enter any value : ");
scanf("%d",&target);

binary_search(array,lenth,target);

getch();
}

