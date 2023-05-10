#include<stdio.h>
int main(){
    int dodo, gogo;//또또면과 꽁꽁바 가격을 저장할 변서 선언//
    int total,deposit,change,rest,menu;//총 구입금액과 잔돈,임시 변수 선언//
    int w500,w100,w50,w10;//각 금액 단위 동전의 개수를 저장할 변수//
    int cnt_dodo, cnt_gogo;//또또면과 꽁꽁바 개수를 입력받을 변수 선언//
    while(1){
        printf("또또면70원 꽁꽁바 30원 입니다. \n");
        printf("각각의 개수를 띄어서 입력하시오.\n");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);//개수 입력 받기//
        dodo = 70*cnt_dodo; //또또면 구입가격 계산//
        gogo = 30*cnt_gogo; //꽁꽁바 구입가격 계산//
        total = dodo+gogo; //전체 구입 총액 계산//
        printf("총 금액은 %d입니다 \n", total);
        printf("투입할 금액을 입력하시오.\n");
        scanf("%d",&deposit);
        if(deposit>total){
            change = deposit - total; //거스름돈 계산//
            w500 = change /500; //몫 연산자를 사용하여 500원 동전의 개수 계산//
            rest = change %500; //500원을 거슬러주고 동전의 개수 계산//
            w100 = rest / 100; //남은 잔돈에서 100워 동전의 개수 계산//
            rest = rest % 100; //100원을 거슬러주고 남은 잔도능 임시 보관//
            w50 = rest /50; 
            rest = rest % 50;
            w10 = rest /10;
            printf("##########거스름돈 최대개수############\n");
            printf("500원개수: %d, 100원개수: %d, 50원개수: %d, 10원의개수: %d\n",w500,w100,w50,w10);
            printf("계속하시려면 1 , 아니면 0을 입력\n");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
        else{
            printf("금액이 부족합니다. 다시 입력하려면 1나가려면 0을 눌러주세요");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
    }
    
    return 0;
}