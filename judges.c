#include<stdio.h>

void hello(int p);
void end();

int main(){

char in;
char answer;
int l,p;
int count=0;

char judges_array[5][256];
char error[255] ="�Է� �׸��� ��Ȯ���� �ʽ��ϴ�. �ٽ� �Է����ּ���.";

printf("####################################\n");
printf("#\t�ɻ��� Ǯ ������ �Է�      #\n");
printf("####################################\n");



printf("> ���� ������Ʈ:");
while(getchar() !='\n');
 
printf("> �ɻ� Ǯ �ο�:");
scanf("%d",&p);

printf("> ���� ��� ��: ");
scanf("%d",&l);
getchar(); //���๮�� ����

hello(p);

for(int a=0; a<p; a++){
    int i=0;
    count=0;

    printf("*�ɻ��� %d:",a+1);
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

printf("[PROJECT] �ɻ��� Ǯ�� Ȯ���ұ��?  ");
scanf("%c",&answer);

if(answer=='Y'){
    count=0;
    for(int a=0; a<p; a++){
        int i=0;
        printf("[�ɻ��� %d]\n",a+1);
        if(judges_array[a][0]=='^'){
            printf("%s",error);
        }
        else 
        while(judges_array[a][i]!='\0'){
            if(judges_array[a][i]==',')
                printf("\n");
            else if(judges_array[a][i]=='"')    
                printf("");                     //ū����ǥ ���x
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
    printf("%d���� �ɻ��� ���� �Է��� �����մϴ�.\n",p);
    printf("++++++++++++++++++++++++++++++++++++\n");
}


void end(){
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("�ɻ��� Ǯ �Է��� �������ϴ�.\n");
    printf("++++++++++++++++++++++++++++++++++++\n");
}


    