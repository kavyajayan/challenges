#include<stdio.h>
int i;
int flag=0;

int prime(int n){
  for(i=2; i<=n/2; i++){
    if(n%i==0){
      flag=0;
      break;
    }
    else{
      flag=1;
    }
  }
  return flag;
}

void main(){
  int num, numl, numg, found=0;
  printf("Input an integer:");
  scanf("%d",&num);
  numg=num;
  numl=num;
  while (found!=1) {
    numg++;
    found=prime(numg);
  }
  found=0;
  while (found!=1) {
    numl--;
    found=prime(numl);
  }
  printf("%d,%d,%d", numl,num,numg);
}
