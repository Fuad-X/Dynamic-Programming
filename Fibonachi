#include <stdio.h>

long long arr[1000] = {0,1};

long long fib(int n){
  if(arr[n]) return arr[n];
  if(n==0) return 0;
  return arr[n] = fib(n-1)+fib(n-2);
}

void printArr(long long arr[], int size){
    for(int i=0;i<size;i++){
        printf("%lld ", arr[i]);
    }
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%lld\n", fib(n));
  printArr(arr, n+1);
  return 0;
}
