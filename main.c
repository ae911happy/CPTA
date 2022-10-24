#include <stdio.h>
#include <string.h>

int main()
{

    char c[1000];

    while (~scanf("%s",c))
    {
        int count=0;
        int judge=1;

        for (int i=0;i< strlen(c);i++)
        {
            if (c[i] == ')')
            {
                judge=0;
                break;
            } else if(c[i] == '(')
            {
                count++;
            }
            else if (c[i] == ')'){
                count--;
            }

        }
        if(count!=0)judge=0;
        if(count==0&&judge==1)printf("YES\n");
        else if(count!=0&&judge==0)printf("NO\n");
    }
    return 0;
}
//
//
//
//#define MAXSIZE 100
//
//typedef char ElemType;
//
//typedef struct
//{
//    ElemType data[MAXSIZE];
//    int top;
//}SqStack;
//
//void InitStack(SqStack *s)
//{
//    s=(SqStack *)malloc(sizeof(SqStack));
//    s->top = -1;
//}
//
//void DestoryStack(SqStack *s)
//{
//    free(s);
//}
//
//bool StackEmpty(SqStack *s)
//{
//    return(s->top == -1);
//}
//
//bool Push(SqStack *s,ElemType e)
//{
//    if (s->top == MAXSIZE-1)
//        return false;
//    s->top++;
//    s->data[s->top] = e;
//    return true;
//}
//void trans(char *exp,char postexp[])
//{
//
//}
//
//int main() {
//
//    return 0;
//}
