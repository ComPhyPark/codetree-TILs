#include <cstdio>
int a[110][110];
int main() {
    int n,m,i,j,r=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        int cont_num=1;
        for(j=1;j<n;j++){
            if(a[i][j]==a[i][j-1])cont_num++;
            else cont_num=1;
            if(cont_num>=m){
                r++;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        int cont_num=1;
        for(j=1;j<n;j++){
            if(a[j][i]==a[j-1][i])cont_num++;
            else cont_num=1;
            if(cont_num>=m){
                r++;
                break;
            }
        }
    }
    if(n==1){
        printf("1");
        return 0;
    }
    printf("%d",r);
    return 0;
}