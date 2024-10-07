#include <stdio.h>
//#include <windows.h>
#include <string.h>

void slash(int N);
void view_user(char* name);
void view_year(char day[32]);
void KOR(int day);

int main(){
    int count=1;

    char day[32];  // ��¥���� �޴� �Լ�
    char name[32]; // �̸��� �޴� �Լ�
    printf("[���� ��¥�� \"yyyy-mm-dd\" �������� �Է��ϼ���]: ");
    scanf("%s",&day);
    

    printf("[����� �̸��� �Է��ϼ���]: ");
    scanf("%s",&name);



    printf("**�Է��� ���������� ó���Ǿ����ϴ�.**\"\n");

    //Sleep(3000);
    //system("cls");    

    slash(1);
    

    for(int i=0; i<5; i++){
        for(int a=0; a<count; a++){             //������ ��
            printf("*");
        }
        
        KOR(i);
        
        for(int a=0; a<6-count; a++){           //�� ���� ��
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
    }                                   // +�� �� ����
    for(int star=0; star<N; star++){
        printf("\n");
    }
}

void view_user(char* name){        
    printf("[�����]:  ");
    printf("%s",name);                  //�̸� ���
    
}


void view_year(char day[32]){

    int b=0;

    char YMD[16] ="���";

    printf("\t\t\t\t[���� �ð�]: ");
    
     for(int a=0; a<10; a++){
        if(day[a]=='-'){
            printf("%c%c",YMD[b],YMD[b+1]);                //YYYY-MM-DD -> YYYY��MM��MM��
            b=b+2;            
        }
        else{
            printf("%c",day[a]);
        }

    }

    printf("��");

}




void KOR(int i){
  
    if(i == 0){
        printf("\t\t\t [���׶��׾� ver 0.1]\t\t\t\t\t\t");
    }
    else if(i == 1){
        printf("   Ǯ �� ���� ���� Ȳ�������� ��¦�̴� �༺�� ���鳻�� �� ���׶��׾�,\t\t\t");
    }
    else if(i == 2){
        printf("    ������� ���� ���ϴ� ������� ã�� �������� �ձ��� ���� ������ ���� ��,\t\t");
    }
    else if(i == 3){
        printf("    ���׶��׾ƿ� ���Ű� ȯ���մϴ�.\"\t\t\t\t\t\t");
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
