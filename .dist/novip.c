void premesti(int matA[100][100],int matB[100][100],int n,int k){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>j){
                if(i==n-1&&j==n-2)matB[i][j]=matA[i][j];
                else if(i-k>j){
                    matB[i][j]=matA[n-k-1][j];
                }
                else matB[i][j]=matA[n-k-1+i-j][j];
            }
            else matB[i][j]=matA[i][j];
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
}
int main()
{   int i,j,n,k,matA[100][100],matB[100][100];
    printf("unesi n i k");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
    scanf("%d",&matA[i][j]);
        
    }
    premesti(matA,matB,n,k);l

    return 0;
}

//6 6 7 2 6