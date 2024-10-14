#include<stdio.h>

void hello(int p);
void end();

int main(){

char in;
char answer;
int l,p;
int count=0;

char judges_array[5][256];
char error[255] ="입력 항목이 정확하지 않습니다. 다시 입력해주세요.";

printf("####################################\n");
printf("#\t심사자 풀 데이터 입력      #\n");
printf("####################################\n");



printf("> 참여 프로젝트:");
while(getchar() !='\n');
 
printf("> 심사 풀 인원:");
scanf("%d",&p);

printf("> 선발 멤버 수: ");
scanf("%d",&l);
getchar(); //개행문자 제거

hello(p);

for(int a=0; a<p; a++){
    int i=0;
    count=0;

    printf("*심사자 %d:",a+1);
    while((in=getchar())!='\n' && in != EOF){
        if(in ==',')
            count++;
        judges_array[a][i++]=in;        
    }
    judges_array[a][i]='\0';

    if(count<6){
        judges_array[a][0]='^';
    }
    
} 

end();

printf("[PROJECT] 심사자 풀을 확인할까요?  ");
scanf("%c",&answer);

if(answer=='Y'){
    count=0;
    for(int a=0; a<p; a++){
        int i=0;
        printf("[심사자 %d]\n",a+1);
        if(judges_array[a][0]=='^'){
            printf("%s",error);
        }
        else 
        while(judges_array[a][i]!='\0'){
            if(judges_array[a][i]==',')
                printf("\n");
            else if(judges_array[a][i]=='"')    
                printf("");                     //큰따옴표 출력x
            else
            printf("%c",judges_array[a][i]);
            
            i++;
        }
        printf("\n");

    }
}
else if(answer=='N'){
    return 0;
}





return 0;
}


void hello(int p){
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("%d명의 심사자 정보 입력을 시작합니다.\n",p);
    printf("++++++++++++++++++++++++++++++++++++\n");
}


void end(){
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("심사자 풀 입력이 끝났습니다.\n");
    printf("++++++++++++++++++++++++++++++++++++\n");
}


    