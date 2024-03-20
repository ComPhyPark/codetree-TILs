#include <cstdio>
int a[22][22];

int max(int x,int y){return x>y?x:y;}
int getSum(int x,int y){
    int s = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            s+=a[x+i][y+j];
        }
    }
    return s;
}

int main() {
    int n,i,j,r;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n-2;i++){
        for(j=0;j<n-2;j++){
            r=max(r,getSum(i,j));
        }
    }
    printf("%d",r);
    return 0;
}