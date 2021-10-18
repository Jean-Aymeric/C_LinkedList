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
#endif //LINKEDLIST_H
