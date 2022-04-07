#include <stdio.h>

int main(){

//Define the array and take inputs from the user.

int arr[3][5], val;


for (int i=0; i<3; i++){

for (int j=0; j<5; j++){


printf("Enter the element: ");

scanf("%d", val);


}

}

//Print columns with distinct values

for (int i=0; i<5; i++){

int j =0;

if (arr[j][i]==arr[j+1][i]==arr[j+2][i]){

continue;

}

else{

printf("%d %d %d", arr[j][i], arr[j+1][i], arr[j+2][i]);

}


return 0;

}}