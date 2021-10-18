#include "LinkedList.h"

unsigned short isLinkInList(Link* list, Link* linkToCheck);

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

unsigned short isLinkInList(Link* list, Link* linkToCheck) {
    unsigned short isPresent = 0;
    Link* temporaryLink = list;
    while( (temporaryLink != NULL) && (!isPresent) ) {
        isPresent = temporaryLink = linkToCheck;
        temporaryLink = temporaryLink->next;
    }
}

void addLinkToLinkedList(Link** list, Link* linkToAdd) {
    if (*list == NULL) {
        list = linkToAdd;
    } else {
        if (! isLinkInList(*list, linkToAdd)) {
            Link* temporaryLink = *list;
            while(temporaryLink->next != NULL) {
                temporaryLink = temporaryLink->next;
            }
            temporaryLink->next = linkToAdd;
        }
    }
}

void addDaraToLinkedList(Link** list, char data) {
    addLinkToLinkedList(list, createLink(data));
}

int getLinkedListLength(Link* list) {
    int counter = 0;
    Link* temporaryLink = list;
    while(temporaryLink != NULL) {
        counter++;
        temporaryLink = temporaryLink->next;
    }
   return counter;
}

char getByIndexInList(Link* list, int index) {
    int counter = 0;
    Link* temporaryLink = list;
    while(temporaryLink != NULL && (counter < index)) {
        counter++;
        temporaryLink = temporaryLink->next;
    }
    if (counter == index) {
        return temporaryLink->data;
    }
    return NULL;
}