void hashAndRemove(Node* head)
{
    // hash map to hash addresses of the linked list nodes
    unordered_map<Node*, int> node_map;
    // pointer to last node
    Node* last = NULL;
    while (head != NULL) {
        // if node not present in the map, insert it in the map
        if (node_map.find(head) == node_map.end()) {
            node_map[head]++;
            last = head;
            head = head->next;
        }
        // if present, it is a cycle, make the last node's next pointer NULL
        else {
            last->next = NULL;
            break;
        }
    }
}