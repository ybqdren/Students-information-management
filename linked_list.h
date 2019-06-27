#if !defined LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>/**����̨�����ٳ�ͷ�ļ� ����getch() ��putch()����*/
#include <malloc.h>


/**---------------�ṹ������---------------**/
typedef struct Log_user user;//�����Log_user�ṹȡһ������user
struct Log_user{
    //�ṹ��������Ա����¼id������
    char id[11];
    char pas[11];
};

typedef struct Student Student;/**�������ѧ����Ϣ�Ľṹ*/
struct Student{
    char xuehao[20];//ѧ��
    char xingming[20];//����
    char sex[5];//�Ա�
    char shushe[20];//�����
    char dianhua[20];//�绰����
    char qq[20];//QQ����
    char adress[30];//��ͥסַ
};
Student data;

/**---��������---*/
typedef struct Linked_list list;/**��������ṹ*/
struct Linked_list{//ѧ��
    Student data;//������
    list *next;/**ָ��ṹ��ָ�룬������������**/
};
list *L;



/**---------------�������---------------**/
/**����һ������*/
list *Create_List(){
    list *head=(list*)malloc(sizeof(list));/**�����ڴ� ������ͷ**/
    head->next=NULL;/**head��next�ڵ�ָ��NULL*/
    return head;/**���ر�ͷ��ַ������������ĵ�ַ*/
}

/**�����ڵ�*/
list *Create_Node(Student data){
    list *new=(list*)malloc(sizeof(list));/**�����½ڵ�*/
    new->data=data;
    new->next=NULL;
    return new;/**�����½ڵ�*/
}




/***���ҽڵ�*/
list *Find_Node(list *head , char *xingming){
    list *move=head->next;
    if(move==NULL)
        return NULL;
    while(strcmp(move->data.xingming,xingming)!=0){/**ͨ���ڵ�����ķ�����ָ���ڵ���ҵ�*/
        move = move->next;
    }
    return move;/**���ر����ҽڵ��ַ*/
}

/***ɾ���ڵ�*/
void Delete_Node(list *head,char *xingming){/**�βΣ�ͷָ�루�����λ�ã���ָ��ɾ������*/
    list *post=head->next;
    list *pre_post=head;
    if(post==NULL){
        printf("\n\n\t\t\t        ���ݲ����ڣ��޷�ɾ����");
        return;
    }
    /**��δ�ҵ�*/
    while(strcmp(post->data.xingming,xingming)!=0){/**�ṹ�岻��ֱ�ӽ��бȽ�*/
            pre_post = post;
            post = pre_post->next;/**��ָ���ڵ�ָ��ָ����ǰһ���ڵ��next�ڵ�*/
            if(post==NULL){
                printf("\n\n\t\t\t        δ�ҵ�ָ�����ݣ��޷�����ɾ��������");
                return;
            }
        }
    /**���ҵ�*/
    pre_post->next=post->next;/**��ǰ��Ԫ��next�ڵ�ָ��ָ��λ�ýڵ��next�ڵ�*/
    free(post);/**�ͷŽڵ�*/
}


/**����ڵ�*/
void Insert_Node(list *head,Student data){//�βΣ�ͷָ�룬Student���ͽṹʵ��
    list *new = Create_Node(data);/**���ýڵ㴴������*/
    new->next=head->next;/**ʹ�ñ�ͷ���뷨����head����next�ڵ�֮�����new�ڵ�*/
    head->next=new;/***��new�ڵ㸳��head��next�ڵ�*/
    printf("\n\n\t \t              \t�洢�ɹ���");
}

/***��ӡ����*/
void Print_List(list *head){
    list *move=head->next;/**Ҫ��ӡ�Ľڵ��ʼ��Ϊָ��ͷ�ļ���next�ڵ�*/
    printf("\n\n\t\t\t     ѧ��\t����\t�Ա�\t�����\t�绰\tQQ\t��ͥ��ַ");
    while(move!=NULL){
        printf("\n\n\t\t\t      %s\t%s\t%s\t%s\t%s\t%s",move->data.xuehao,move->data.xingming,move->data.sex,move->data.dianhua,move->data.qq,move->data.adress);
        move = move->next;
        /**move�ڵ�һֱ������������move�ڵ㣡=NULL*����move->next!=NULL*/
    }
    printf("\n");
}

/**ͳ������ڵ����*/
int Count_Node(list *head){
    int i=0;
    list *Node=head;
    Node = Node->next;
    while(Node){
        i++;/**ͨ��i���� ͳ������ڵ���*/
        Node=Node->next;
    }
    return i;
}

void System_menuad(void);
void User_chiose(void);
void Now_Time(void);
list *Find_Node(list *head , char *xingming);
void Delete_Node(list *head,char *xingming);
void Insert_Node(list * head,Student data);/**����ڵ�*/
void Print_List(list *head);/**��ӡ�ڵ�*/
int Count_Node(list *head);

#endif
