#include "linked_list.h"

int main(){
        int i,j;
        char user_id[11],passward[11];
        user admin;//����һ��user���͵�admin�ࣨ����Ա�˻���
        strcpy(admin.id, "1111111111");
        strcpy(admin.id, "1111111111");


/****************�˶��˺����빦��ʵ��****************/
        printf("\n\n\t\t\t\t************ѧ����Ϣ����ϵͳ��¼ҳ��************");
        printf("\n\n\n\t\t\t\t\t     ���������A1801 ����");
            printf("\n\n\n\n\t\t\t\t\t�������˺ţ�");
            for(i=0;i<10;i++){
                scanf("%c",&user_id[i]);}
            printf("\n\t\t\t\t\t���������룺");
            for(i=0;i<10;i++){
                passward[i]=getch();
                putch('*');}//��������ʾ����Ļ��ʱ��*����
            if(strcmp(user_id,admin.id)==0){
                printf("\n\n\t\t\t\t\t       ��¼�ɹ���");//��ת����Ա����
                while(1){
                    System_menuad();
                    User_chiose();}
            }
            else{
                printf("\n\t\t\t\t\t�˻����������");;

        }
        exit(1);/**����������3�Σ��Զ��˳�����**/
}



void System_menuad(void){/**����ԱUI**/
    printf("\n\n\n\t\t\t    ����Ա ");
    Now_Time();//����ʱ�亯��
    printf("\n\n\t\t\t   |--------------------ѧ����Ϣ����ϵͳ--------------------|\n");
    printf("\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     1.¼��ѧ����Ϣ\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     2.����ѧ����Ϣ\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     3.ɾ��ѧ����Ϣ\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     4.�޸�ѧ����Ϣ\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     5.����ѧ����Ϣ\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     6.����\t\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     7.ͳ��ѧ������\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     8.��ʾ����ѧ����Ϣ\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     0.�˳�ϵͳ\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                      \t\t\t\t    |");
    printf("\n\t\t\t   |--------------------------------------------------------|\n");

}


void User_chiose(void){
    list *L=Create_List();/**����һ������*/
    int num;
    printf("\t\t\t\t       �����루0~8����");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("\n\n\t\t\t     ----------------------����ѧ����Ϣ----------------------");
            fflush(stdin);/**��ջ�����*/
            printf("\n\n\t \t\n\n\t \t\t      ѧ��     ����     �Ա�     �����     �绰     qq     �ҵ�סַ\n\n\t\t\t      �����룺");
            printf("\n\n\t \t              ");
            scanf("%s %s %s %s %s %s %s",data.xuehao,data.xingming,data.sex,data.shushe,data.dianhua,data.qq,data.adress);
            Insert_Node(L,data);
            break;/**����¼�뺯��*/
        case 2:
            printf("\n\n\t\t\t     ----------------------����ѧ����Ϣ----------------------");
            printf("\n\n\t \t              ������Ҫ����ѧ����������");
            scanf("%s",data.xingming);
            if(Find_Node(L,data.xingming)==NULL)
            printf("\n\n\t \t              û�����ѧ����");
            else{
            printf("\n\n\t \t              ѧ��\t����\t�Ա�\t�����\t�绰\tQQ\t��ͥ��ַ");
            printf("%s\t%s\t%s\t%s\t%s\t%s\t%s",Find_Node(L,data.xingming)->data.xuehao,Find_Node(L,data.xingming)->data.xingming,Find_Node(L,data.xingming)->data.sex,Find_Node(L,data.xingming)->data.shushe,Find_Node(L,data.xingming)->data.dianhua,Find_Node(L,data.xingming)->data.qq,Find_Node(L,data.xingming)->data.adress);
            }
            break;/**���ò��Һ���*/
        case 3:
            printf("\n\n\t\t\t     ----------------------ɾ��ѧ����Ϣ----------------------");
            printf("\n\n\t \t              ������Ҫɾ��ѧ����������");
            scanf("%s",data.xingming);
            Delete_Node(L,data.xingming);/**����ɾ���ڵ㺯��*/
            break;/**����ɾ������*/
        case 4:
            printf("\n\n\t\t\t     ----------------------�޸�ѧ����Ϣ----------------------");
            break;/**�����޸ĺ���*/
        case 5:
            printf("\n\n\t\t\t     ----------------------����ѧ����Ϣ----------------------");
            fflush(stdin);/**��ջ�����*/
            printf("\n\n\t \t              ������ѧ��ѧ��\t����\t�Ա�\t�����\t�绰\tqq\t�ҵ�סַ\n");
            printf("\n\n\t \t              ");
            scanf("%s %s %s %s %s %s %s",data.xuehao,data.xingming,data.sex,data.shushe,data.dianhua,data.qq,data.adress);
            Insert_Node(L,data);
            break;/**���ò��뺯��*/
        case 6:
            printf("\n\n\t\t\t     ----------------------����----------------------");
            break;/**����������*/
        case 7:
            printf("\n\n\t\t\t     ----------------------ͳ��ѧ������----------------------");
            /**ͨ��ͳ�ƽڵ������ȷ������*/
            int i=Count_Node(L);
            printf("\n\n\t\t\t        һ����%dλѧ��",i);
            break;/**����ͳ�ƺ���*/
        case 8:
            printf("\n\n\t\t\t     ----------------------ѧ��ȫ����ʾ----------------------");
            Print_List(L);/**�������еĽڵ�ȫ����ӡ����*/
            break;/**������ʾ����*/
        case 0:exit(1);break;/**�˳�ϵͳ*/
        default:printf("\n\n\t\t\t\t       ���벻�Ϸ���\n\t\t\t\t       ���������룡");/**�������ֲ��Ϸ�,ʹ�õݹ����û���������*/
    }

}

/**���õ��Ե�ǰʱ���ж������绹������*/
void Now_Time(void){
    time_t t=time(NULL);//��time()�������ص�time_t���͵�ֵ��ֵ��t
    struct tm *n_t;//����һ���ṹָ��n_t
    n_t=localtime(&t);//ʹ��localtime()�����õ�һ��ָ��ǰϵͳʱ���ָ�룬��ָ��tm�ṹ��ָ�룬���丳��n_t
    if(n_t->tm_hour>=6&&n_t->tm_hour<11)
        printf("����ã�\n");
    else if(n_t->tm_hour>=11&&n_t->tm_hour<13)
        printf("����ã�\n");
    else if(n_t->tm_hour>=13&&n_t->tm_hour<19)
        printf("����ã�\n");
    else if(n_t->tm_hour>=19&&n_t->tm_hour<=24)
        printf("���Ϻã�\n");
    else//1<=localtime.tm_hour<=5
        printf("�賿�ã�\n");
}
