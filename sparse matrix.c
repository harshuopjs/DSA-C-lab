//Harsh Kumar Singh
#include <stdio.h>
//creating a structure for sparse
struct sparce
{
  int r,c,v;
};
//some global variable
int r,c, n, key, i, j, row,col, v,k;
int arr[20][20];
int main(){
  printf("Enter Number of row: ");
  scanf("%d",&row);
  printf("Enter Number of column: ");
  scanf("%d",&col);
  printf("Enter elements of array: ");
  //taking input of array
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  //printing sparse 
  printf("Your Given SParse martix is : \n");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%d \t",arr[i][j]);
    }
    printf("\n");
  }
  //main code for sparse or printing result
 struct sparce s[12];
  int k=0;
    for (int i = 0; i < row; i++) {
      for(int j = 0; j< col; j++){
      if (arr[i][j] != 0) {
        s[k].r=i;
        s[k].c=j;
        s[k].v=arr[i][j]; 
        k=k+1;
      } 
      }
    }
  printf("sparse matrix result is: \n");
  for (int i = 0; i<k;i++){
    printf("%d %d %d \t \n",s[i].r,s[i].c,s[i].v);
  }
}
