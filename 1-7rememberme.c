#include<stdio.h>

struct info_sheet{    
    char name[64];
    char birthday[16];
    char sex[4];
    char e_mail[64]; 
    int result;
};

struct rollingpaper{
    char name[32];
    char msessage[64];
};

void write_roliingpaper();



int main(){
    const struct info_sheet memorial03={"Suphanan Wong",   "20040105" ,"여", "suphanan@outlook.com",0};
    const struct info_sheet memorial05={"Karolina Nowak",  "20060908" ,"여", "karolina@outlook.com",0};

    struct rollingpaper rollingpp01={""};   
    struct rollingpaper rollingpp02={""};
    





    return 0;
}

void write_roliingpaper(struct rollingpaper rolling,int x){
    
    printf("이름 : ");
    scanf("%s",rolling.name);
    printf(" 전할 메세지 : ");
    scanf("%s",rolling.msessage);
    while(getchar() !='\0');

}




