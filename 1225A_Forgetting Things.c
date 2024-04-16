    #include <stdio.h>
     
    int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("%d %d",(a*10),((b*10)+1));
    }
    else if(a+1==b){
         printf("%d %d",((a*10)+9),(b*10));
    }
    else if(a==9&& b==1){
        printf("%d %d",(9),(10));
    }
    else{
        printf("%d",(-1));
    }
        return 0;
    }
