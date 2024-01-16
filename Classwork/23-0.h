#ifndef _LIST_H
#define _LIST_H

typedef struct 
{
	int number;
	char name[80];
	struct List* next;
}List;

//typedef struct listitem* List;

List* initlist(int a, char* str); /* èíèöèàëèçàöèÿ ñïèñêà ïóñòûì ñîäåðæèìûì */
void putslist(List* Head);
List* additem(List* Head, int a, char* str);
List* insertfront_int(List* a, int val); /* âñòàâêà â ñïèñîê ïåðåä óçëîì ñî çíà÷åíèåì ïîëÿ number=val */
List* insertback_int(List* a, int val); /* âñòàâêà â ñïèñîê ïåðåä óçëîì ñî çíà÷åíèåì ïîëÿ number=val */
List* insertfront_str(List* a, char* str); /* âñòàâêà â ñïèñîê ïåðåä óçëîì ñî çíà÷åíèåì str â ïîëå name */
List* insertback_str(List* a, char* str); /* âñòàâêà â ñïèñîê ïåðåä óçëîì ñî çíà÷åíèåì str â ïîëå name */
int isempty(List* a);/* ïðîâåðÿåò, ÿâëÿåòñÿ ëè ñïèñîê ïóñòûì*/
int length(List* a); /* îïðåäåëåíèå äëèíû ñïèñêà */
List* destroyitem(List* a, List* node); /* óäàëåíèå çàäàííîãî óçëà node èç ñïèñêà */
List* getitem_int(List* a, int n); /* íàõîæäåíèå óçëà ñî çíà÷åíèåì n â ïîëå number*/
List* getitem_str(List* a, char* str); /* íàõîæäåíèå óçëà ñî çíà÷åíèåì str â ïîëå name*/
#endif /* _LIST_H */

