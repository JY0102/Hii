#include<stdio.h>
#include<stdlib.h>

void hello(int a);

void Scan_info(char* candidate,char* age,int a);

void Out_info(char* candidate,char* age,int a);


int main(){
    int a=0;
        
    char age[6][5]={0};
    char member_info[6][256];

    char *candidate01 = member_info[0];                  //여기 다시 해결하기
    char *candidate02 = member_info[1];
    char *candidate03 = member_info[2];
    char *candidate04 = member_info[3];
    char *candidate05 = member_info[4];
    char *candidate06 = member_info[5];
    
    printf("####################################\n");
    printf("\t오디션 후보자 데이터 입력\n");
    printf("####################################\n");

       
    

 for (a = 0; a < 6; a++) {
        hello(a);
        Scan_info(member_info[a], age[a],a);        // 입력 값 6개를 받기
    }


 for (a = 0; a < 6; a++) {
        Out_info(member_info[a], age[a],a);        //  값 6개를 출력
    }

    return 0;
}

void hello(int a){   
    char number[6][10]={
    "첫",
    "두",
    "세",
    "네",
    "다섯",
    "여섯"
    };
    
    printf("%s",number[a]);                            //N번째 후보자 출력
      
   
    printf("번째 후보자의 정보를 입력합니다.\n");           
    printf("-----------------------------------\n");
   
}

void Scan_info(char* candidate,char* age,int a){                  //후보자 데이터 입력 

    int p=0;
    int i=0;
    int count=0;
    char ch;
    const char* base_info[11] = {
        "성명: ",
        "생일(YYYY/MM/DD 형식): ",
        "성별(여성이면 F 또는 남성이면 M): ",
        "메일 주소: ",
        "국적: ",
        "BMI: ",                                    //2차원 배열 사용
        "주 스킬: ",
        "보조 스킬: ",
        "한국어 등급(TOPIK): ",
        "MBTI: ",
        "소개: "
    };

while(count<11){

    printf("%s",base_info[count]);                      //각 질문 하나씩 출력
    
    while((ch = getchar()) != '\n' && ch != EOF) {      // 줄바꿈 또는 EOF를 만날 때까지 입력       
            candidate[i++] = ch;
            if(count==1&&p<4){
                age[p++]=ch;                
            }                                           // 입력받은 문자 를 저장 
        }
            candidate[i++] = '^';                       // 각 질문 끝에 '^' 추가하여 질문 별로 구별
            count++;
    }
    candidate[i-1]='\0';                                //각 문장 끝에 \0 추가
    age[p]='\0';
    printf("=================================\n");
}


void Out_info(char* candidate,char* age,int a){
    int sansu=0;
    int nayi[6];
    int slash=0;
    int i=0;
    int n=0;
    int count=0;

    sansu = atoi(age);       
    nayi[a] = 2024-sansu;       // 만 나이 계산
    
    printf("####################################\n");
    printf("\t오디션 후보자 데이터 조회 \n");
    printf("####################################\n");
    printf("=============================================================================================\n");
    printf(" 성   명  | 생     일|성별|  메         일  |국  적|BMI|주스킬|보조 스킬|TOPIK|MBTI|소개\n");
    
    
    while(count<11&&candidate[i] !='\0'){
        
        if(candidate[i]=='^'&&count==0)
            printf("(%d)",nayi[a]);                    // 이름 뒤에 (만나이) 출력
        
        if(candidate[i]=='^'){
            printf(" |");                         // 후보자 정보들을 출력후 | << 구별
            count++;
        }
        else if(candidate[i]=='F'&&count==2){       // 성별 출력
            printf("여");        
        }
        else if(candidate[i]=='M'&&count==2)        //성별 출력2
            printf("남");
        else
            printf("%c",candidate[i]); 

     i++;
    }


    printf("\n");
    
}