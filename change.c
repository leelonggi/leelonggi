#include<stdio.h>
int main(){
    int dodo, gogo;//�ǶǸ�� �ǲǹ� ������ ������ ���� ����//
    int total,deposit,change,rest,menu;//�� ���Աݾװ� �ܵ�,�ӽ� ���� ����//
    int w500,w100,w50,w10;//�� �ݾ� ���� ������ ������ ������ ����//
    int cnt_dodo, cnt_gogo;//�ǶǸ�� �ǲǹ� ������ �Է¹��� ���� ����//
    while(1){
        printf("�ǶǸ�70�� �ǲǹ� 30�� �Դϴ�. \n");
        printf("������ ������ �� �Է��Ͻÿ�.\n");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);//���� �Է� �ޱ�//
        dodo = 70*cnt_dodo; //�ǶǸ� ���԰��� ���//
        gogo = 30*cnt_gogo; //�ǲǹ� ���԰��� ���//
        total = dodo+gogo; //��ü ���� �Ѿ� ���//
        printf("�� �ݾ��� %d�Դϴ� \n", total);
        printf("������ �ݾ��� �Է��Ͻÿ�.\n");
        scanf("%d",&deposit);
        if(deposit>total){
            change = deposit - total; //�Ž����� ���//
            w500 = change /500; //�� �����ڸ� ����Ͽ� 500�� ������ ���� ���//
            rest = change %500; //500���� �Ž����ְ� ������ ���� ���//
            w100 = rest / 100; //���� �ܵ����� 100�� ������ ���� ���//
            rest = rest % 100; //100���� �Ž����ְ� ���� �ܵ��� �ӽ� ����//
            w50 = rest /50; 
            rest = rest % 50;
            w10 = rest /10;
            printf("##########�Ž����� �ִ밳��############\n");
            printf("500������: %d, 100������: %d, 50������: %d, 10���ǰ���: %d\n",w500,w100,w50,w10);
            printf("����Ͻ÷��� 1 , �ƴϸ� 0�� �Է�\n");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
        else{
            printf("�ݾ��� �����մϴ�. �ٽ� �Է��Ϸ��� 1�������� 0�� �����ּ���");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
    }
    
    return 0;
}