#include "LinkedList.h"

int main() {
    Link* first = createLink('A');
    for (int i = 1; i < 26; i++) {
        addDaraToLinkedList(&first, 65 + i);
    }
    showLinkedList(first);
    destroyLink(first);
    return 0;
}
