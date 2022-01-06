#include <stdio.h>
int main(){
  int T, n, BIN[32] = {0};
  scanf("%d",&T);
  for(int i=0; i<T; i++){
    scanf("%d",&n);
    if(n==0){
      printf("0\n");
      continue;
    }
    for(int b=0; b<32; b++) if((n&(1<<b))!=0) BIN[b] = 1;
    int flag = 0;
    for(int b=31; b>-1; b--){
      if(!flag && BIN[b]) flag = 1;
      if(flag) printf("%d",BIN[b]);
      BIN[b] = 0;
    }
    printf("\n");
  }
  return 0;
}
