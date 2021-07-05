// WAP to sort n number of stings in lexicographical order (dictionary order).
#include <stdio.h>
#include <string.h>

int main() {
  int n,m;
  printf("Enter the number of input: ");
  scanf("%d", &n);
  char str[n][20],str1[n][20],temp[n];
  for (int i=0; i<n; i++) {
    printf("Enter a word: ");
    scanf("%s", str[i]);
    strlwr(str[i]);
  }
  for(int i=0;i<n;i++)
    for(int j=i;j<n;j++){
      if(str[i]<str[j]){
        strcpy(temp,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],temp);
      }
    }
  printf("Order of Sorted Strings: \n");
  for(int i=0;i<n;i++) puts(str[i]);
  return 0;
}
