#include<stdio.h>
#include<stdlib.h>
#include<time.h>
			
int main(void){
    int player;
    int cpu;
    int hantei=0;
    srand((unsigned)time(NULL));
	
    while (hantei==0) {
        printf("手を選んでください\n");
        printf("グー:1、チョキ:2、パー:3\n");
        scanf("%d",&player);
        cpu=rand()%3+1;
        switch(player){
            case 1:
		    printf("あなたの手:グー\n");
            break;
            case 2:
            printf("あなたの手:チョキ\n");
            break;
            case 3:
            printf("あなたの手:パー\n");
            break;
            default:
            printf("選択肢にない数字です\n");
            break;
        }
        if(player<4){
            switch(cpu){
            case 1:
            printf("CPUの手:グー\n");
            break;
            case 2:
			printf("CPUの手:チョキ\n");
            break;
			case 3:
            printf("CPUの手:パー\n");
            break;
        }
        }else{
            printf("");
        }

        if((player==1 && cpu==3) || (player==2 && cpu==1) || (player==3 && cpu==2)){
            printf("あなたの負けです\n");
            hantei=1;
        }else if(player==cpu){
            printf(" \n");
            printf("あいこです\nもう一度");
        }else if((player==3 && cpu==1) || (player==1 && cpu==2) || (player==2 && cpu==3)){
            printf("あなたの勝ちです\n");
            hantei=1;
        }else{
            printf(" \n");
            printf("もう一度");
        }
    }
    return 0;
}
