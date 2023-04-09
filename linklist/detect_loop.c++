bool detectLoop(Node* head)
{
        // your code here
        Node*fast=head,*slow=head;
        while(fast&&fast->next&&slow)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
                return 1;
        }
        return 0;
}