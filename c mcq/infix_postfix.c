#include <stdio.h>


int * precedence(char *str){
    int *prec = (int *)malloc(sizeof(int)*strlen(str));
    if(*str == '+' || *str == '-'){
        *prec = 1;
    }
    else if(*str == '*' || *str == '/'){
        *prec = 2;
    }
    else if(*str == '^'){
        *prec = 3;
    }
    else{
        *prec = 0;
    }
}

int main(){


    // infix to postfix
    char infix[] = "a+b*c-d/e";
    char postfix[100];
    int i = 0, j = 0;
    char stack[100];
    int top = -1;
    while(infix[i]!='\0'){
        if(infix[i]>='a' && infix[i]<='z'){
            postfix[j] = infix[i];
            j++;
        }
        else if(infix[i]=='('){
            stack[++top] = infix[i];
        }
        else if(infix[i]==')'){
            while(stack[top]!='('){
                postfix[j] = stack[top];
                top--;
                j++;
            }
            top--;
        }
        else{
            while(top!=-1 && stack[top]!='(' && precedence(stack[top])>=precedence(infix[i])){
                postfix[j] = stack[top];
                top--;
                j++;
            }
            stack[++top] = infix[i];
        }
        i++;
    }
    while(top!=-1){
        postfix[j] = stack[top];
        top--;
        j++;
    }
    postfix[j] = '\0';
    printf("%s\n", postfix);


    return 0;
}