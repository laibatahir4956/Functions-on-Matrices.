#include <stdio.h>

const int m=2,n=2,q=2,p=2;

   int multi(int a[m][n],int b[p][q]){
    int i,j,p,sum=0;
     for(i=0;i<2;i++){
         for(j=0;j<2;j++){
             for(p=0;p<2;p++){
               sum=sum + a[i][p]*b[p][j];
             }
             printf("\t%d\t",sum);
             sum=0;
         }
        printf("\n"); 
     }
   }
 
   int plus(int a[m][n],int b[2][2]){
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
         printf("\t%d",a[i][j]+b[i][j]);
        }
        printf("\n");
      }
   }
   
   int minus(int a[m][n],int b[2][2]){
      for(int i=0;i<2;i++){
         for(int j=0;j<2;j++){
            printf("\t%d",a[i][j]-b[i][j]);
         }
         printf("\n");
      }
   }
 
  
int main(){
int i,j,mtrxa[2][2],mtrxb[2][2];
   
     for(i=0;i<2;i++){
         for(j=0;j<2;j++){
             printf("\nEnter the element %d%d of Matrix A : ",i,j);
             scanf("%d",&mtrxa[i][j]);
         }
     }
     printf("\nThe Matrix A is :\n");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\t%d",mtrxa[i][j]);
        }
        printf("\n");
     }
        
     for(i=0;i<2;i++){
         for(j=0;j<2;j++){
             printf("\nEnter the element %d%d of Matrix B: ",i,j);
             scanf("%d",&mtrxb[i][j]);
         }
     }
     printf("\nThe Matrix B is :\n");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\t%d",mtrxb[i][j]);
        }
        
        printf("\n");
     }
     printf("\n\tKEYS For Function on Matrices :\n");
     printf(" Addition : 1\n Subtraction : 2\n Multiplication : 3");
     int key;
printf("\nPress Respective Key :");
scanf("%d",&key);


   switch(key){
      case 1:
      printf("\nThe Addition of Two Matrices A and B is Given as : \n");
      int add=plus(mtrxa,mtrxb);
      break;
      
      case 2:
      printf("\nThe Subtraction of Two Matrices A and B is Given as : \n");
      int sub=minus(mtrxa,mtrxb);
      break; 
      
      case 3:
     printf("\nThe Multiplicaton of Two Matrices A and B is Given as : \n");
     int product=multi(mtrxa,mtrxb);
     break;
     
   }
    return 0;
}
