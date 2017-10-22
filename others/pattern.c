#include<stdio.h>
#include<string.h>
int i;
int k;

void pattern(int i, int n, char str[20])
{
  {
    for (k = 0; k < n-i-1; k++) {
      printf(".");
    }
    for (k = 0; k<=i; k++) {
      printf("%c",str[k]);
    }
    for (k=i-1; k>=0; k--) {
      printf("%c",str[k]);
    }
    printf("\n");
  }
}
void main(){
  char str[20]; char revstr[20];
  scanf("%s",str);
  int n=strlen(str);
  int len =n;
  for(i=n-1,k=0; k<n; i--, k++){
    revstr[i]=str[k];
  }
  for(i=0; i<n; i++){
    pattern(i,n,str);
  }
  for (i = n-2;i>=0;i--){
    pattern(i,n,revstr);
  }
}
