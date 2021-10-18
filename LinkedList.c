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