#include <stdio.h>
#include <string.h>
int main(){
  //I love when you are 105 degree
  char A[105] = {0}, B[105] = {0}, C[105] = {0};
  scanf("%[^+]%*c",A);
  scanf("%s",B);
  int dA = (int)strlen(A), dB = (int)strlen(B);
  int dd = dA-dB, i=0;
  if(dd!=0){
    for(; i < ((dd>0)?dd:-dd); i++) C[i+1] = ((dd>0)?A[i]:B[i]) - 48;
    for(; i < ((dd>0)?dA:dB); i++) C[i+1] = A[i+((dd>0)?0:dd)] + B[i+((dd>0)?-dd:0)] - 96;
    for(int j=i; j>0; j--){
      C[j-1] += C[j]/10;
      C[j] %= 10;
    }
    if(C[0]!=0) printf("%d",C[0]);
    for(int j=1; j<i+1; j++) printf("%d",C[j]);
  }else{
    for(; i < dA; i++) C[i+1] = A[i] + B[i] - 96;
    for(int j=i; j>0; j--){
      C[j-1] += C[j]/10;
      C[j] %= 10;
    }
    if(C[0]!=0) printf("%d",C[0]);
    for(int j=1; j<i+1; j++) printf("%d",C[j]);
  }
  return 0;
}
