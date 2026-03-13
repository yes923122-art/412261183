#include <stdio.h>
int main(){
    long long num;
    int sum = 0;
    scanf("%lld",&num);
    while(num>=10){
        sum = 0;

        while(num>0){
            sum =sum + num % 10;
            num = num/10;
        }
        num=sum;
    }
    
    printf("%lld\n",num);
    return 0;
}