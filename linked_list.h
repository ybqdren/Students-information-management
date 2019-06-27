#if !defined LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>/**控制台输入速出头文件 包含getch() 和putch()函数*/
#include <malloc.h>


/**---------------结构体声明---------------**/
typedef struct Log_user user;//给这个Log_user结构取一个别名user
struct Log_user{
    //结构中两个成员：登录id、密码
    char id[11];
    char pas[11];
};

typedef struct Student Student;/**声明存放学生信息的结构*/
struct Student{
    char xuehao[20];//学号
    char xingming[20];//姓名
    char sex[5];//性别
    char shushe[20];//宿舍号
    char dianhua[20];//电话号码
    char qq[20];//QQ号码
    char adress[30];//家庭住址
};
Student data;

/**---链表声明---*/
typedef struct Linked_list list;/**声明链表结构*/
struct Linked_list{//学号
    Student data;//数据域
    list *next;/**指向结构的指针，用来遍历链表**/
};
list *L;



/**---------------链表操作---------------**/
/**创建一条链表*/
list *Create_List(){
    list *head=(list*)malloc(sizeof(list));/**分配内存 创建表头**/
    head->next=NULL;/**head的next节点指向NULL*/
    return head;/**返回表头地址，即返回链表的地址*/
}

/**创建节点*/
list *Create_Node(Student data){
    list *new=(list*)malloc(sizeof(list));/**创建新节点*/
    new->data=data;
    new->next=NULL;
    return new;/**返回新节点*/
}




/***查找节点*/
list *Find_Node(list *head , char *xingming){
    list *move=head->next;
    if(move==NULL)
        return NULL;
    while(strcmp(move->data.xingming,xingming)!=0){/**通过节点遍历的方法将指定节点查找到*/
        move = move->next;
    }
    return move;/**返回被查找节点地址*/
}

/***删除节点*/
void Delete_Node(list *head,char *xingming){/**形参：头指针（链表的位置），指定删除数据*/
    list *post=head->next;
    list *pre_post=head;
    if(post==NULL){
        printf("\n\n\t\t\t        数据不存在！无法删除！");
        return;
    }
    /**若未找到*/
    while(strcmp(post->data.xingming,xingming)!=0){/**结构体不能直接进行比较*/
            pre_post = post;
            post = pre_post->next;/**将指定节点指针指向其前一个节点的next节点*/
            if(post==NULL){
                printf("\n\n\t\t\t        未找到指定数据！无法进行删除操作！");
                return;
            }
        }
    /**若找到*/
    pre_post->next=post->next;/**其前驱元的next节点指向指定位置节点的next节点*/
    free(post);/**释放节点*/
}


/**插入节点*/
void Insert_Node(list *head,Student data){//形参：头指针，Student类型结构实例
    list *new = Create_Node(data);/**调用节点创建函数*/
    new->next=head->next;/**使用表头插入法，在head与其next节点之间插入new节点*/
    head->next=new;/***将new节点赋给head的next节点*/
    printf("\n\n\t \t              \t存储成功！");
}

/***打印链表*/
void Print_List(list *head){
    list *move=head->next;/**要打印的节点初始化为指向头文件的next节点*/
    printf("\n\n\t\t\t     学号\t姓名\t性别\t宿舍号\t电话\tQQ\t家庭地址");
    while(move!=NULL){
        printf("\n\n\t\t\t      %s\t%s\t%s\t%s\t%s\t%s",move->data.xuehao,move->data.xingming,move->data.sex,move->data.dianhua,move->data.qq,move->data.adress);
        move = move->next;
        /**move节点一直遍历的条件：move节点！=NULL*，即move->next!=NULL*/
    }
    printf("\n");
}

/**统计链表节点个数*/
int Count_Node(list *head){
    int i=0;
    list *Node=head;
    Node = Node->next;
    while(Node){
        i++;/**通过i计数 统计链表节点数*/
        Node=Node->next;
    }
    return i;
}

void System_menuad(void);
void User_chiose(void);
void Now_Time(void);
list *Find_Node(list *head , char *xingming);
void Delete_Node(list *head,char *xingming);
void Insert_Node(list * head,Student data);/**插入节点*/
void Print_List(list *head);/**打印节点*/
int Count_Node(list *head);

#endif
