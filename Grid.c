#include <stdio.h>

long long grid[100][100] = {0};

long long ways(int x, int y){
  if(x==0 || y==0) return 0;
  if(x==1 && y==1) return 1;
  if(grid[x][y]) return grid[x][y];
  grid[x][y] = ways(x-1, y) + ways(x, y-1);
  grid[y][x]=grid[x][y];
  return grid[x][y];
}

void printArr(long long arr[100][100], int x, int y){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            printf("%lld ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
  int x,y;
  scanf("%d %d", &x, &y);
  printf("%lld\n", ways(x,y));
  printArr(grid, x, y);
  return 0;
}
