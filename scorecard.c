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
    printf("#\t����� �ɻ� ��� �Է�\t   #\n");
    printf("####################################\n");

    printf("> �ɻ��� �̸�: ");
    fgets(judge,sizeof(judge),stdin);
    printf("> ���� �о�: ");
    fgets(judge,sizeof(judge),stdin);

    printf("++++++++++++++++++++++++++++++++++++\n");
    while(1){
    
    if(count==6){                                          
        for(int i=0; i<6; i++){
            printf("%s�� ������ : %d\n",candidates[i].name,candidates[i].total);
        }
        printf("�����Ͻðڽ��ϱ�?");
        scanf("%c",&YN);
        
        if(YN=='Y'){
            printf("��***���� ������ �Ϸ��߽��ϴ�.***"); //���� ȭ��
            break;
        }
        else if('N'){
            count=0;
            continue;       //ó������ �ٽ� �Է� �ޱ�.            
        }
        else{
            printf("�߸��� ���Դϴ�.");     //�ٽ� �� �ޱ�
            continue;
        }
    }
        scan_info(candidates,count);    // �ĺ��� �� �Է� �ޱ�.
        count++;
}
  
  
    printf("=======================================\n");
    printf("�ĺ� ���� ��� ���� �� ...\n");
    printf("=======================================\n");
    printf("######################################\n");
    printf("#�и��������� ����� �� �������մϴ�!#\n");
    printf("######################################\n");

    out_info(candidates);

    printf("++++++++++++++++++++++++++++++++++++\n");

    return 0;
}

void scan_info(struct scoring_sheet candidates[],int count){
    int check[6]={0};
    int gcc=0;
    
    printf("�ĺ���: ");
    scanf("%s", &candidates[count].name);

    while(gcc !=1){ 
        printf("���� �Ҿ�: ");
        scanf("%d", &candidates[count].music);
        check[0] = candidates[count].music;

        printf("��: ");
        scanf("%d", &candidates[count].dance);
        check[1] = candidates[count].dance;

        printf("����: ");
        scanf("%d", &candidates[count].vocal);
        check[2] = candidates[count].vocal;

        printf("���־�: ");
        scanf("%d", &candidates[count].visual);
        check[3] = candidates[count].visual;

        printf("���޷�: ");
        scanf("%d", &candidates[count].power);
        check[4] = candidates[count].power;
        while (getchar() != '\n');

        for(int b=0; b<5; b++){
            if(10 >check[b]||100<check[b]){         // ������ 10���̸� 100�� �ʰ����� üŷ
                check[0]=0;
                break;
            }             
        }

        if(!check[0]){         
            printf("�߸��� ���� �Էµƽ��ϴ�. �ٽ� �Է����ּ���.\n");    // ���� ���ǿ� �ش�Ǹ� �迭 �ʱ�ȭ �� �ٽ� ����
            candidates[count].music = 0;
            candidates[count].dance = 0;
            candidates[count].vocal = 0;
            candidates[count].visual = 0;
            candidates[count].power = 0;
            continue;
        }

        candidates[count].total = candidates[count].music + candidates[count].dance +candidates[count].vocal + 
                                  candidates[count].visual+candidates[count].power;             // �� ���� �ջ�.
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