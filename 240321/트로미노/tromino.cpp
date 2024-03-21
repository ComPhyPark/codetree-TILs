#include <cstdio>
int dx[6][3]={{0,1,2},{0,0,0},{0,1,1},{0,1,1},{0,0,1},{0,0,1}};
int dy[6][3]={{0,0,0},{0,1,2},{0,0,1},{1,1,0},{0,1,1},{0,1,0}};
int a[210][210];

int main() {
    int n,m,i,j,k,r=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<6;k++){
                int s=0;
                for(int x=0;x<3;x++)s+=a[i+dx[k][x]][j+dy[k][x]];
                if(s>r)r=s;
            }
        }
    }
    printf("%d",r);
    return 0;
}