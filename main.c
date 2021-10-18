#include "LinkedList.h"

int main() {
    Link* first = createLink('A');
    for (int i = 1; i < 26; i++) {
        addDaraToLinkedList(&first, 65 + i);
    }
    showLinkedList(first);
    printf("\nNumber of links : %d\n", getLinkedListLength(first));
    for (int i = 0; i < 26; i++) {
        printf("%c\t", getByIndexInList(first, i));
    }
    destroyLink(first);
    return 0;
}
