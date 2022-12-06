#include<stdio.h>
#include<math.h>
int main(){
   int marks[10], i, n, A_grade=0, B_grade=0, C_grade=0, D_grade=0;
   scanf("%d", &n);
   for(i=0; i<n; i++){
      scanf("%d", &marks[i]);
      if(marks[i]>=90){
         A_grade++;
      }
      else if(marks[i]>=80){
         B_grade++;
      }
      else if(marks[i]>=70){
         C_grade++;
      }
      else if(marks[i]>=60){
          D_grade++;
      }
    }
      if(A_grade>B_grade && A_grade>C_grade && A_grade>D_grade){
          printf("Most students receive A grade ");
      }
      else if(B_grade>A_grade && B_grade>C_grade && B_grade>D_grade){
          printf("Most students receive B grade ");
      }
      else if(C_grade>A_grade && C_grade>B_grade && C_grade>D_grade){
          printf("Most students receive C grade ");
      }
      else{
          printf("Most students receive D grade ");
      }
      return 0;
   }
