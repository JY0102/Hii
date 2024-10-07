#include <stdio.h>
//#include <windows.h>
#include <string.h>

void slash(int N);
void view_user(char* name);
void view_year(char day[32]);
void KOR(int day);

int main(){
    int count=1;

    char day[32];  // 날짜값을 받는 함수
    char name[32]; // 이름값 받는 함수
    printf("[현재 날짜를 \"yyyy-mm-dd\" 형식으로 입력하세요]: ");
    scanf("%s",&day);
    

    printf("[당신의 이름을 입력하세요]: ");
    scanf("%s",&name);



    printf("**입력이 정상적으로 처리되었습니다.**\"\n");

    //Sleep(3000);
    //system("cls");    

    slash(1);
    

    for(int i=0; i<5; i++){
        for(int a=0; a<count; a++){             //정방향 별
            printf("*");
        }
        
        KOR(i);
        
        for(int a=0; a<6-count; a++){           //역 방향 별
            printf("*");
        }
        
        printf("\n");
        count++;
    }

    slash(1);

    view_user(name);

    view_year(day);

    printf("\n================================================================================\n");
    
    return 0;
}


void slash(int N){
    for(int star =0; star<95; star++){
       printf("+");   
    }                                   // +로 된 밑줄
    for(int star=0; star<N; star++){
        printf("\n");
    }
}

void view_user(char* name){        
    printf("[사용자]:  ");
    printf("%s",name);                  //이름 출력
    
}


void view_year(char day[32]){

    int b=0;

    char YMD[16] ="년월";

    printf("\t\t\t\t[실행 시간]: ");
    
     for(int a=0; a<10; a++){
        if(day[a]=='-'){
            printf("%c%c",YMD[b],YMD[b+1]);                //YYYY-MM-DD -> YYYY년MM월MM일
            b=b+2;            
        }
        else{
            printf("%c",day[a]);
        }

    }

    printf("일");

}




void KOR(int i){
  
    if(i == 0){
        printf("\t\t\t [마그라테아 ver 0.1]\t\t\t\t\t\t");
    }
    else if(i == 1){
        printf("   풀 한 포기 없는 황무지에서 반짝이는 행성을 만들내는 곳 마그라테아,\t\t\t");
    }
    else if(i == 2){
        printf("    사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빗는 곳,\t\t");
    }
    else if(i == 3){
        printf("    마그라테아에 오신걸 환영합니다.\"\t\t\t\t\t\t");
    }
    else if(i == 4){
        printf("\t\t\t\t\t\t\t\t\t\t\t");
    }

}






void print(){
    for(int a=0; a<5; a++){
        for(int t=0; t<a+1; t++){
            printf("*");
        }

        KOR(a);
        
        
        for(int A=0; A<5-a; A++){
                printf("*");
            }
        for(int A=0; A<a; A++){
                printf(" ");
            }
        
        printf("\n");
    }
}
