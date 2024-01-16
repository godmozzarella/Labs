#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define NMAX 100
#define TYPE char
#define FTYPE "%3c,"


typedef struct Stack{
    int   top;
    TYPE  data[NMAX];
} stack;

typedef struct Node{
    TYPE data;
    struct Node * next;
}Node;

typedef struct{
    struct Node *queue;
    struct Node *front;
    struct Node *back;
} queue_list;

void display(stack *s);
int isempty(stack *s);// проверить, если стек пуст {top==0} вернуть 1, иначе 0
int isfull(stack *s);// проверить, если стек полон {top==NMAX-1} вернуть 1, иначе 0
int push(stack *s, TYPE a);//поместить элемент а в стек  {top=top+1, data[top]=a}, если стек не полон
TYPE pop(stack *s);// вернуть элемент {data[top]}, удалив его из стека {top=top-1}, если стек не пуст
TYPE top(stack *s);//вернуть значение элемента в вершине стека {return data[top]}
void enQueue(queue_list *que, TYPE element);//добавить элемент в очередь
TYPE deQueue(queue_list *que);//извлечь элемент из очереди
void stack_test(stack* s);
void printQ(queue_list* que);
void Q_test(queue_list* que);
void test_a(void);

int main(void){
    int c = 100;
    stack* S = (stack*)malloc(sizeof(stack));
    S->top = 0;
    queue_list* Q = (queue_list*)malloc(sizeof(queue_list));
    Q->front = NULL;
    Q->back = NULL;
    while (c != 0){
        puts("Выберите действие:\n'1' - вывода содержимого стека на экран\n'2' - проверить, если стек пуст\n'3' - проверить, если стек полон\n'4' - поместить элемент а в стек\n'5' - вернуть элемент, удалив его из стека\n'6' - вернуть значение элемента в вершине стека\n'7' - добавить элемент в очередь\n'8' - извлечь элемент из очереди\n'9' - тест\n'10' - вывод очереди\n'11' - тест очереди\n'12' - тест а\n'0' - выход\n");
        scanf("%d", &c);
        switch (c){
                
            case 1:
                display(S);
                break;
                
            case 2:
                if (isempty(S) == 1) puts("стек пуст\n");
                else puts("стек не пуст\n");
                break;
                
            case 3:
                if (isfull(S) == 1) puts("стек полон\n");
                else puts("стек не полон\n");
                break;
                
            case 4:
                puts("введите элемент");
                char a;
                scanf("%c", &a);
                push(S, a);
                break;
                
            case 5:
                printf("%c\n", pop(S));
                break;
                
            case 6:
                printf("%c\n", top(S));
                break;
                
            case 7:{
                puts("введите элемент");
                char a;
                scanf(" %c", &a);
                enQueue(Q, a);
                break;
            }
                
            case 8:
                printf("%c \n", deQueue(Q));
                break;
                
            case 9:
                stack_test(S);
                break;
                
            case 10:
                printQ(Q);
                break;
                
            case 11:
                Q_test(Q);
                break;
                
            case 12:
                test_a();
                break;
                
            case 0:
                break;
                
                
        }
    }
}

void display(stack *s){
    int i = s->top;
    while (i>0)
        printf(FTYPE, s->data[i--]);
}

int isempty(stack* s){
    if (s->top == 0) return 1;
    else return 0;
}

int isfull(stack* s){
    if (s->top == NMAX) return 1;
    else return 0;
}

int push(stack* s, TYPE a){
    if (isfull(s) == 0){
        s->top = s->top + 1;
        s->data[s->top] = a;
    }
    return 0;
}

TYPE pop(stack* s){
    if (s->top != 0){
        s->top--;
        return s->data[s->top + 1];
    }
    else puts("Bruh.");
    return 0;
}

TYPE top(stack* s){
    return s->data[s->top];
}

void stack_test(stack* s){
    char a[100];
    puts("введите элемент");
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; ++i){
        push(s, a[i]);
    }
}

void enQueue(queue_list* que, TYPE element)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = element;
    node->next = NULL;
    if (que->front == NULL) que->front = node;
    else que->back->next = node;
    que->back = node;
}

TYPE deQueue(queue_list* que){
    if (que->front == NULL) puts("bruh.");
    else{
        Node* temp = que->front;
        que->front = que->front->next;
        return temp->data;
    }
    return 0;
}

void printQ(queue_list* que){
    Node* current = que->front;
    while (current != NULL){
        printf("%c ", current->data);
        current = current->next;
    }
    puts("\n");
}

void Q_test(queue_list* que){
    char a[100];
    puts("введите элемент");
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; ++i){
        enQueue(que, a[i]);
    }
}

void test_a(void){
    char a[100], a2[100];
    puts("введите элемент");
    scanf("%s", a);

    stack* ST_1 = (stack*)malloc(sizeof(stack));
    ST_1->top = 0;
    for (int i = 0; a[i] != '\0'; ++i){
        push(ST_1, a[i]);
    }
    int d = ST_1->top;
    for (int i = 0; i < ST_1->top; ++i){
        a[i] = ST_1->data[d];
        d--;
    }
    a2[ST_1->top] = '\0';
    if (strcmp(a, a2) == 0) puts("да\n");
    else puts("Bruh.\n");
}















