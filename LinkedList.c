#include "LinkedList.h"

Link* createLink(char data) {
    Link* createdLink = malloc(sizeof(Link));
    if (createdLink != NULL) {
        createdLink->data = data;
        createdLink->next = NULL;
    }
}

void destroyLink(Link* linkToDestroy) {
    if (linkToDestroy != NULL) {
        destroyLink(linkToDestroy->next);
    }
    free(linkToDestroy);
}

void showLinkedList(Link* linkToShow) {
    Link* temporaryLink = linkToShow;
    while(temporaryLink != NULL) {
        printf("%c -> ", temporaryLink->data);
        temporaryLink = temporaryLink->next;
    }
    printf("NULL");
}

void addLinkToLinkedList(Link** list, Link* linkToAdd) {
    if (*list == NULL) {
        list = linkToAdd;
    } else {
        Link* temporaryLink = *list;
        while(temporaryLink->next != NULL) {
            temporaryLink = temporaryLink->next;
        }
        temporaryLink->next = linkToAdd;
    }
}

void addDaraToLinkedList(Link** list, char data) {
    addLinkToLinkedList(list, createLink(data));
}