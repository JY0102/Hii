#include<stdio.h>
#include<stdlib.h>

struct scoring_sheet
{
    char name[64];
    int music;
    int dance;
    int vocal;
    int visual;
    int power;
    int total;

}score;


void scan_info(struct scoring_sheet candidates[],int count);

void out_info(struct scoring_sheet candidates[]);

int main(){
    struct scoring_sheet candidates[6]={1,2,3,4,5,6};
    char judge[64];
    char YN;
    int count=0;
    
    printf("####################################\n");
    printf("#\t오디션 심사 결과 입력\t   #\n");
    printf("####################################\n");

    printf("> 심사자 이름: ");
    fgets(judge,sizeof(judge),stdin);
    printf("> 전문 분야: ");
    fgets(judge,sizeof(judge),stdin);

    printf("++++++++++++++++++++++++++++++++++++\n");
    while(1){
    
    if(count==6){                                          
        for(int i=0; i<6; i++){
            printf("%s의 총점수 : %d\n",candidates[i].name,candidates[i].total);
        }
        printf("제출하시겠습니까?");
        scanf("%c",&YN);
        
        if(YN=='Y'){
            printf("“***최종 제출을 완료했습니다.***"); //다음 화면
            break;
        }
        else if('N'){
            count=0;
            continue;       //처음부터 다시 입력 받기.            
        }
        else{
            printf("잘못된 값입니다.");     //다시 값 받기
            continue;
        }
    }
        scan_info(candidates,count);    // 후보생 값 입력 받기.
        count++;
}
  
  
    printf("=======================================\n");
    printf("후보 선발 결과 집계 중 ...\n");
    printf("=======================================\n");
    printf("######################################\n");
    printf("#밀리웨이즈의 멤버가 된 걸축하합니다!#\n");
    printf("######################################\n");

    out_info(candidates);

    printf("++++++++++++++++++++++++++++++++++++\n");

    return 0;
}

void scan_info(struct scoring_sheet candidates[],int count){
    int check[6]={0};
    int gcc=0;
    
    printf("후보자: ");
    scanf("%s", &candidates[count].name);

    while(gcc !=1){ 
        printf("음악 소양: ");
        scanf("%d", &candidates[count].music);
        check[0] = candidates[count].music;

        printf("댄스: ");
        scanf("%d", &candidates[count].dance);
        check[1] = candidates[count].dance;

        printf("보컬: ");
        scanf("%d", &candidates[count].vocal);
        check[2] = candidates[count].vocal;

        printf("비주얼: ");
        scanf("%d", &candidates[count].visual);
        check[3] = candidates[count].visual;

        printf("전달력: ");
        scanf("%d", &candidates[count].power);
        check[4] = candidates[count].power;
        while (getchar() != '\n');

        for(int b=0; b<5; b++){
            if(10 >check[b]||100<check[b]){         // 점수가 10점미만 100점 초과인지 체킹
                check[0]=0;
                break;
            }             
        }

        if(!check[0]){         
            printf("잘못된 값이 입력됐습니다. 다시 입력해주세요.\n");    // 위에 조건에 해당되면 배열 초기화 및 다시 시작
            candidates[count].music = 0;
            candidates[count].dance = 0;
            candidates[count].vocal = 0;
            candidates[count].visual = 0;
            candidates[count].power = 0;
            continue;
        }

        candidates[count].total = candidates[count].music + candidates[count].dance +candidates[count].vocal + 
                                  candidates[count].visual+candidates[count].power;             // 총 점수 합산.
        gcc++;
        printf("====================================\n");
    }   
}

void out_info(struct scoring_sheet candidates[]){
int MAX=0;
int MAX_NUM=candidates[0].total;

for(int num=1; num<5; num++){    
    for(int x=0; x<7; x++){
        if(MAX_NUM<candidates[x].total){
            MAX_NUM=candidates[x].total;
            MAX=x;
            }
        } 
    printf("%d. %s\n",num,candidates[MAX].name);
    candidates[MAX].total=0;
    MAX_NUM=0;             

    }
}