#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Link {
    char data;
    struct Link* next;
} Link;

Link* createLink(char data);
void destroyLink(Link* linkToDestroy);
void showLinkedList(Link* linkToShow);
void addLinkToLinkedList(Link** list, Link* linkToAdd);
void addDaraToLinkedList(Link** list, char data);
int getLinkedListLength(Link* list);
char getByIndexInList(Link* list, int index);
int getCountDataInList(Link* list, char data);
void delLinkById(Link* list, int index);
#endif //LINKEDLIST_H
