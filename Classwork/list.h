#ifndef _LIST_H
#define _LIST_H

typedef struct 
{
	int number;
	char name[80];
	struct List* next;
}List;

//typedef struct listitem* List;

List* initlist(int a, char* str); /* инициализация списка пустым содержимым */
void putslist(List* Head);
List* additem(List* Head, int a, char* str);
List* insertfront_int(List* a, int val); /* вставка в список перед узлом со значением поля number=val */
List* insertback_int(List* a, int val); /* вставка в список перед узлом со значением поля number=val */
List* insertfront_str(List* a, char* str); /* вставка в список перед узлом со значением str в поле name */
List* insertback_str(List* a, char* str); /* вставка в список перед узлом со значением str в поле name */
int isempty(List* a);/* проверяет, является ли список пустым*/
int length(List* a); /* определение длины списка */
List* destroyitem(List* a, List* node); /* удаление заданного узла node из списка */
List* getitem_int(List* a, int n); /* нахождение узла со значением n в поле number*/
List* getitem_str(List* a, char* str); /* нахождение узла со значением str в поле name*/
#endif /* _LIST_H */

