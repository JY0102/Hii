#include<stdio.h>
#include<stdlib.h>

void hello(int a);

void Scan_info(char* candidate,char* age);

void Out_info(char* candidate,char* age);


int main(){
    int a=0;
        
    char age[5]={0};
    char member_info[6][256];

    char *candidate01 = member_info[0];                  //���� �ٽ� �ذ��ϱ�
    char *candidate02 = member_info[1];
    char *candidate03 = member_info[2];
    char *candidate04 = member_info[3];
    char *candidate05 = member_info[4];
    char *candidate06 = member_info[5];
    
    printf("####################################\n");
    printf("\t����� �ĺ��� ������ �Է�\n");
    printf("####################################\n");

       
    

 for (a = 0; a < 6; a++) {
        hello(a);
        Scan_info(member_info[a], age);        // �Է� �� 6���� �ޱ�
    }


 for (a = 0; a < 6; a++) {
        Out_info(member_info[a], age);        //  �� 6���� ���
    }

    return 0;
}

void hello(int a){   
    char number[6][10]={
    "ù",
    "��",
    "��",
    "��",
    "�ټ�",
    "����"
    };
    
    printf("%s",number[a]);                            //N��° �ĺ��� ���
      
   
    printf("��° �ĺ����� ������ �Է��մϴ�.\n");           
    printf("-----------------------------------\n");
   
}

void Scan_info(char* candidate,char* age){                  //�ĺ��� ������ �Է� 

    int p=0;
    int i=0;
    int count=0;
    char ch;
    const char* base_info[11] = {
        "����: ",
        "����(YYYY/MM/DD ����): ",
        "����(�����̸� F �Ǵ� �����̸� M): ",
        "���� �ּ�: ",
        "����: ",
        "BMI: ",                                    //2���� �迭 ���
        "�� ��ų: ",
        "���� ��ų: ",
        "�ѱ��� ���(TOPIK): ",
        "MBTI: ",
        "�Ұ�: "
    };

while(count<11){

    printf("%s",base_info[count]);                      //�� ���� �ϳ��� ���
    
    while((ch = getchar()) != '\n' && ch != EOF) {      // �ٹٲ� �Ǵ� EOF�� ���� ������ �Է�       
            candidate[i++] = ch;
            if(count==1&&p<4){
                age[p++]=ch;                
            }                                           // �Է¹��� ���� �� ���� 
        }
            candidate[i++] = '^';                       // �� ���� ���� '^' �߰��Ͽ� ���� ���� ����
            count++;
    }
    candidate[i-1]='\0';                                //�� ���� ���� \0 �߰�
    age[p]='\0';
    printf("=================================\n");
}


void Out_info(char* candidate,char* age){
    int nayi;
    int slash=0;
    int i=0;
    int n=0;
    int count=0;

    nayi = atoi(age);       
    nayi = 2024-nayi;       // �� ���� ���
    
    printf("####################################\n");
    printf("\t����� �ĺ��� ������ ��ȸ \n");
    printf("####################################\n");
    printf("=============================================================================================\n");
    printf(" ��   ��  | ��     ��|����|  ��         ��  |��  ��|BMI|�ֽ�ų|���� ��ų|TOPIK|MBTI|�Ұ�\n");
    
    
    while(count<11&&candidate[i] !='\0'){
        
        if(candidate[i]=='^'&&count==0)
            printf("(%d)",nayi);                    // �̸� �ڿ� (������) ���



        if(candidate[i]=='^'){
            printf(" |");                         // �ĺ��� �������� ����� | << ����
            count++;
        }
        else if(candidate[i]=='F'&&count==2){       // ���� ���
            printf("��");
        
        }
        else if(candidate[i]=='M'&&count==2)        //���� ���2
            printf("��");
        else
            printf("%c",candidate[i]); 

     i++;
    }


    printf("\n");
    
}