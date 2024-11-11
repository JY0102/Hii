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
        {111111,"박지연",          "20060415" ,"여", "jiyeon@outlook.com",    "한국",     18.5, "댄스", "작곡" ,  0, "ENFJ",1},
        {222222,"Ethan Smith",     "20050822" ,"남", "ethan@outlook.com",    "미국",     21.2, "보컬", "작사" ,  2, "ISTP",1},
        {333333,"Suphanan Wong",   "20040105" ,"여", "suphanan@outlook.com", "태국" ,    19.0, "댄스", "작사" ,  4, "INFJ",0},
        {444444,"Helena Silva",    "20070310" ,"여", "helena@outlook.com",   "브라질",   20.8, "보컬", "작곡 및 작사" ,1, "ENFP",1},
        {555555,"Karolina Nowak",  "20060908" ,"여", "karolina@outlook.com", "폴란드",   17.9, "댄스", "작곡" ,  2, "ISFP",0},
        {666666,"Liam Wilson",     "20061108" ,"남", "liam@outlook.com",     "호주",     20.1, "댄스", "작곡 및 작사" ,3, "ENTJ",1},
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
        printf("이름: ");
        scanf("%s", &milliways[i].name);

        printf("닉네임: ");
        scanf("%s", &milliways[i].aka);        

        printf("학력: ");
        scanf("%s", &milliways[i].ability);

        printf("키: ");
        scanf("%f", &milliways[i].cm);

        printf("혈액형: ");
        scanf("%s", &milliways[i].b_type);

        printf("알러지: ");
        scanf("%s", &milliways[i].allergy);

        printf("취미: ");
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
    printf("\t오디션 합격자 데이터 조회\n ");
    printf("####################################\n");
    printf("\t성   명      | 생     일|성별|          메 일          |국  적| BMI |주스킬|보조 스킬|\n");
    printf("\t%-13s|%-10s|%-4s|\t%-23s|%-6s|%-5.1f|%-6s|%-8s|\n",milliways[i].name, milliways[i].birthday, milliways[i].sex, milliways[i].e_mail, milliways[i].country, milliways[i].bmi, milliways[i].skill, milliways[i].b_skill);
    printf("TOPIK|MBTI|  닉네임  | 키 |몸무게|혈액형| 학력 | 알러지 |       취미       |\t\tSNS\t\t|\n");
    
    printf("%-5d|%s|%-10s|%-4.0f|%-6.0f|%-6s|%-6s|%-8s|%- 18s|%-28s|\n",milliways[i].kor, milliways[i].mbti, milliways[i].aka, milliways[i].cm, milliways[i].weight, milliways[i].b_type,milliways[i].ability, milliways[i].allergy, milliways[i].hobby, milliways[i].sns);

printf("");

};