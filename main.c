#include "linked_list.h"

int main(){
        int i,j;
        char user_id[11],passward[11];
        user admin;//定义一个user类型的admin类（管理员账户）
        strcpy(admin.id, "1111111111");
        strcpy(admin.id, "1111111111");


/****************核定账号密码功能实现****************/
        printf("\n\n\t\t\t\t************学生信息管理系统登录页面************");
        printf("\n\n\n\t\t\t\t\t     制作：软件A1801 赵雯");
            printf("\n\n\n\n\t\t\t\t\t请输入账号：");
            for(i=0;i<10;i++){
                scanf("%c",&user_id[i]);}
            printf("\n\t\t\t\t\t请输入密码：");
            for(i=0;i<10;i++){
                passward[i]=getch();
                putch('*');}//将密码显示在屏幕上时用*代替
            if(strcmp(user_id,admin.id)==0){
                printf("\n\n\t\t\t\t\t       登录成功！");//跳转管理员界面
                while(1){
                    System_menuad();
                    User_chiose();}
            }
            else{
                printf("\n\t\t\t\t\t账户或密码错误！");;

        }
        exit(1);/**当次数大于3次，自动退出程序！**/
}



void System_menuad(void){/**管理员UI**/
    printf("\n\n\n\t\t\t    管理员 ");
    Now_Time();//返回时间函数
    printf("\n\n\t\t\t   |--------------------学生信息管理系统--------------------|\n");
    printf("\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     1.录入学生信息\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     2.查找学生信息\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     3.删除学生信息\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     4.修改学生信息\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     5.插入学生信息\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     6.排序\t\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     7.统计学生总数\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     8.显示所有学生信息\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                     0.退出系统\t\t\t    |");
    printf("\n\t\t\t   |\t\t\t\t\t\t\t    |\n\t\t\t   |                      \t\t\t\t    |");
    printf("\n\t\t\t   |--------------------------------------------------------|\n");

}


void User_chiose(void){
    list *L=Create_List();/**创建一条链表*/
    int num;
    printf("\t\t\t\t       请输入（0~8）：");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("\n\n\t\t\t     ----------------------插入学生信息----------------------");
            fflush(stdin);/**清空缓冲区*/
            printf("\n\n\t \t\n\n\t \t\t      学号     姓名     性别     宿舍号     电话     qq     家底住址\n\n\t\t\t      请输入：");
            printf("\n\n\t \t              ");
            scanf("%s %s %s %s %s %s %s",data.xuehao,data.xingming,data.sex,data.shushe,data.dianhua,data.qq,data.adress);
            Insert_Node(L,data);
            break;/**调用录入函数*/
        case 2:
            printf("\n\n\t\t\t     ----------------------查找学生信息----------------------");
            printf("\n\n\t \t              请输入要查找学生的姓名：");
            scanf("%s",data.xingming);
            if(Find_Node(L,data.xingming)==NULL)
            printf("\n\n\t \t              没有这个学生！");
            else{
            printf("\n\n\t \t              学号\t姓名\t性别\t宿舍号\t电话\tQQ\t家庭地址");
            printf("%s\t%s\t%s\t%s\t%s\t%s\t%s",Find_Node(L,data.xingming)->data.xuehao,Find_Node(L,data.xingming)->data.xingming,Find_Node(L,data.xingming)->data.sex,Find_Node(L,data.xingming)->data.shushe,Find_Node(L,data.xingming)->data.dianhua,Find_Node(L,data.xingming)->data.qq,Find_Node(L,data.xingming)->data.adress);
            }
            break;/**调用查找函数*/
        case 3:
            printf("\n\n\t\t\t     ----------------------删除学生信息----------------------");
            printf("\n\n\t \t              请输入要删除学生的姓名：");
            scanf("%s",data.xingming);
            Delete_Node(L,data.xingming);/**调用删除节点函数*/
            break;/**调用删除函数*/
        case 4:
            printf("\n\n\t\t\t     ----------------------修改学生信息----------------------");
            break;/**调用修改函数*/
        case 5:
            printf("\n\n\t\t\t     ----------------------插入学生信息----------------------");
            fflush(stdin);/**清空缓冲区*/
            printf("\n\n\t \t              请输入学生学号\t姓名\t性别\t宿舍号\t电话\tqq\t家底住址\n");
            printf("\n\n\t \t              ");
            scanf("%s %s %s %s %s %s %s",data.xuehao,data.xingming,data.sex,data.shushe,data.dianhua,data.qq,data.adress);
            Insert_Node(L,data);
            break;/**调用插入函数*/
        case 6:
            printf("\n\n\t\t\t     ----------------------排序----------------------");
            break;/**调用排序函数*/
        case 7:
            printf("\n\n\t\t\t     ----------------------统计学生人数----------------------");
            /**通过统计节点个数来确定人数*/
            int i=Count_Node(L);
            printf("\n\n\t\t\t        一共有%d位学生",i);
            break;/**调用统计函数*/
        case 8:
            printf("\n\n\t\t\t     ----------------------学生全部显示----------------------");
            Print_List(L);/**将链表中的节点全部打印出来*/
            break;/**调用显示函数*/
        case 0:exit(1);break;/**退出系统*/
        default:printf("\n\n\t\t\t\t       输入不合法！\n\t\t\t\t       请重新输入！");/**输入数字不合法,使用递归让用户重新输入*/
    }

}

/**利用电脑当前时间判断是上午还是下午*/
void Now_Time(void){
    time_t t=time(NULL);//将time()函数返回的time_t类型的值赋值给t
    struct tm *n_t;//声明一个结构指针n_t
    n_t=localtime(&t);//使用localtime()函数得到一个指向当前系统时间的指针，即指向tm结构的指针，将其赋给n_t
    if(n_t->tm_hour>=6&&n_t->tm_hour<11)
        printf("上午好！\n");
    else if(n_t->tm_hour>=11&&n_t->tm_hour<13)
        printf("中午好！\n");
    else if(n_t->tm_hour>=13&&n_t->tm_hour<19)
        printf("下午好！\n");
    else if(n_t->tm_hour>=19&&n_t->tm_hour<=24)
        printf("晚上好！\n");
    else//1<=localtime.tm_hour<=5
        printf("凌晨好！\n");
}
