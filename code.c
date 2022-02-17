#include <stdio.h>
                                         
int main(){
int arr[3][3];
int * ptr = &arr[0][0]; 
printf("Enter the Elements in the array :-\n");
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
            printf("Element [%d][%d]=",i,j);
            scanf("%d",(*(arr+i)+j)); 
 }
}
printf("The Elements in the array are :-\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
            printf("arr[%d][%d]=%d\n",i,j,*(*(arr+i)+j));
            
    }
}
printf("Diagonal Elements of the entered matrix are:-\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(i==j){
            printf("arr[%d][%d]=%d\n",i,j,*(*(arr+i)+j));
        }
    }
}
int sum=0;
printf("Sum of Diagonal Elements of the entered matrix is: ");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(i==j){
            sum+=*(*(arr+i)+j);           
        }
    }
}
printf("%d",sum);

return 0;
}
