#include<stdio.h>
#include<stdlib.h>

struct info_sheet{

    int id;
    char name[64];
    char birthday[16];
    char sex[4];
    char e_mail[64];
    char country[16];
    float bmi;
    char skill[16];
    char b_skill[32];
    int kor;
    char mbti[4];
    int result;
};


struct last_sheet{
    int id;
    char name[64];
    char birthday[16];
    char sex[4];
    char e_mail[64];
    char country[16];
    float bmi;
    char skill[16];
    char b_skill[32];
    int kor;
    char mbti[6];
        
    char aka[64];
	char ability[32];
	float cm;
	char b_type[8];
	char allergy[32];
	char hobby[64];
	char sns[128];

    float weight;
};

void interview(struct last_sheet milliways[],int count);

void copy(struct info_sheet candidates[],struct last_sheet milliways[]);

void plus_weight(struct last_sheet milliways[],int i);


void END(struct last_sheet milliways[],int i);


int main(){  
	struct info_sheet candidate_arr[6]=
    {
        {111111,"������",          "20060415" ,"��", "jiyeon@outlook.com",    "�ѱ�",     18.5, "��", "�۰�" ,  0, "ENFJ",1},
        {222222,"Ethan Smith",     "20050822" ,"��", "ethan@outlook.com",    "�̱�",     21.2, "����", "�ۻ�" ,  2, "ISTP",1},
        {333333,"Suphanan Wong",   "20040105" ,"��", "suphanan@outlook.com", "�±�" ,    19.0, "��", "�ۻ�" ,  4, "INFJ",0},
        {444444,"Helena Silva",    "20070310" ,"��", "helena@outlook.com",   "�����",   20.8, "����", "�۰� �� �ۻ�" ,1, "ENFP",1},
        {555555,"Karolina Nowak",  "20060908" ,"��", "karolina@outlook.com", "������",   17.9, "��", "�۰�" ,  2, "ISFP",0},
        {666666,"Liam Wilson",     "20061108" ,"��", "liam@outlook.com",     "ȣ��",     20.1, "��", "�۰� �� �ۻ�" ,3, "ENTJ",1},
    };
    struct last_sheet milliways_arr[4]={0};

    const int false =100;
    char name_check[16]={0};
    char num_check[32]={0};
    int Checking=0;
    
    copy(candidate_arr,milliways_arr);



for(int x=0; x<1; x++){
        interview(milliways_arr,x);
        plus_weight(milliways_arr,x);
    }



for(int x=0; x<4; x++){
    END(milliways_arr,x);
}

    printf("");
	return 0;
}


void interview(struct last_sheet milliways[],int i){
        printf("�̸�: ");
        scanf("%s", &milliways[i].name);

        printf("�г���: ");
        scanf("%s", &milliways[i].aka);        

        printf("�з�: ");
        scanf("%s", &milliways[i].ability);

        printf("Ű: ");
        scanf("%f", &milliways[i].cm);

        printf("������: ");
        scanf("%s", &milliways[i].b_type);

        printf("�˷���: ");
        scanf("%s", &milliways[i].allergy);

        printf("���: ");
        scanf("%s", &milliways[i].hobby);

        printf("SNS: ");
        scanf("%s", &milliways[i].sns);
        while (getchar() != '\n');
        if(i==3){}         
        else
            printf("====================================\n");

        printf("%s\n", milliways[i].name);
        printf("%s\n", milliways[i].aka);        
        printf("%s\n", milliways[i].ability);
        printf("%.2f\n", milliways[i].cm);
        printf("%s\n", milliways[i].b_type);
        printf("%s\n", milliways[i].allergy);
        printf("%s\n", milliways[i].hobby);
        printf("%s\n", milliways[i].sns);

           printf("====================================\n");

} 

void copy(struct info_sheet candidates[],struct last_sheet milliways[]){
    int x=0;
    int p=0;

	for(int i=0; i<4; i++){    
    
    if(candidates[i].result==1){

    milliways[i].id =candidates[x].id;

    for (int j = 0; j < 64; j++){
        milliways[i].name[j] = candidates[x].name[j];
        if (candidates[x].name[j] == '\0') break; 
    }

    for (int j = 0; j < 32; j++){
        milliways[i].birthday[j] = candidates[x].birthday[j];
        if (candidates[x].birthday[j] == '\0') break; 
    }

    for (int j = 0; j < 64; j++) {
        milliways[i].sex[j] = candidates[x].sex[j];
        if (candidates[x].sex[j] == '\0') break; 
    }
       for (int j = 0; j < 64; j++) {
        milliways[i].e_mail[j] = candidates[x].e_mail[j];
        if (candidates[x].e_mail[j] == '\0') break; 
    }
       for (int j = 0; j < 64; j++) {
        milliways[i].country[j] = candidates[x].country[j];
        if (candidates[x].country[j] == '\0') break; 
    }
    milliways[i].bmi=candidates[i].bmi;
       for (int j = 0; j < 64; j++) {
        milliways[i].skill[j] = candidates[x].skill[j];
        if (candidates[x].skill[j] == '\0') break; 
    }
       for (int j = 0; j < 64; j++) {
        milliways[i].b_skill[j] = candidates[x].b_skill[j];
        if (candidates[x].b_skill[j] == '\0') break; 
    }
    milliways[i].kor=candidates[x].kor;
    
       for (int j = 0; j < 64; j++) {
        milliways[i].mbti[j] = candidates[x].mbti[j];
        if (candidates[x].mbti[j] == '\0') break; 
    }
    
        }
    }
}

void plus_weight(struct last_sheet milliways[],int i){

    milliways[i].weight=milliways[i].bmi*milliways[i].cm*milliways[i].cm/10000;

};

void END(struct last_sheet milliways[],int i){
    milliways[i].mbti[4] = '\0';
    
    
    printf("####################################\n");
    printf("\t����� �հ��� ������ ��ȸ\n ");
    printf("####################################\n");
    printf("\t��   ��      | ��     ��|����|          �� ��          |��  ��| BMI |�ֽ�ų|���� ��ų|\n");
    printf("\t%-13s|%-10s|%-4s|\t%-23s|%-6s|%-5.1f|%-6s|%-8s|\n",milliways[i].name, milliways[i].birthday, milliways[i].sex, milliways[i].e_mail, milliways[i].country, milliways[i].bmi, milliways[i].skill, milliways[i].b_skill);
    printf("TOPIK|MBTI|  �г���  | Ű |������|������| �з� | �˷��� |       ���       |\t\tSNS\t\t|\n");
    
    printf("%-5d|%s|%-10s|%-4.0f|%-6.0f|%-6s|%-6s|%-8s|%- 18s|%-28s|\n",milliways[i].kor, milliways[i].mbti, milliways[i].aka, milliways[i].cm, milliways[i].weight, milliways[i].b_type,milliways[i].ability, milliways[i].allergy, milliways[i].hobby, milliways[i].sns);

printf("");

};