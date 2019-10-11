/**
 * Example of Singly Linked List
 */

#include <iostream>

/* --- create base structure for a link list node --- */
struct node
{
    int data;
    node *next;
};

/* --- class of functions to handle nodes --- */
class list
{
  private:
    node *head, *tail;

  public:
    // constructor to make them NULL to avoid any garbage value
    list() : head(NULL), tail(NULL) {}
    
    /* function to create a node */
    void create_node(int value)
    {   
        // declare a new node temp
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;

        // if list is empty
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;  // set next of exisiting tail to temp
            tail = temp;        // set tail to newly added tail
        }
    }

    /* function to display a node */
    void display_node()
    {
        node *temp = new node;
        temp = head;        // set temp to head

        // iterate temp on entire list
        while(temp != NULL)
        {
            std::cout << temp->data << "\t";
            temp = temp->next;
        }
    }

    /* function to insert a new node at the start */
    void insert_start(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    /* function to insert a new node at the end */
    void insert_end(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }

    /* function to insert a new node at any given position */
    void insert_position(int pos, int value)
    {
        node *prev = new node;
        node *curr = new node;
        node *temp = new node;

        curr = head;
        for(int i = 1; i < pos; i++)
        {
            prev = curr;
            curr = curr->next; 
        }

        temp->data = value;
        prev->next = temp;
        temp->next = curr;
    }

    /* function to delete a node at the start */
    void delete_start()
    {
        node *temp = new node;
        temp = head;
        head = head->next;
        delete temp;
    }

    /* function to delete a node at the end */
    void delete_end()
    {
        node *prev = new node;
        node *curr = new node;
        curr = head;

        while( curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }

        delete curr;
        tail = prev;
        prev->next = NULL;
    }

    /* function to delete a node at any given position */
    void delete_position(int pos)
    {
        node *prev = new node;
        node *curr = new node;
        curr = head;

        for(int i = 1; i < pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
    }
};


int main()
{
    list l;     
    l.create_node(5);
    l.create_node(8);
    l.create_node(10);

    std::cout << "Original list: ";
    l.display_node();
    std::cout << "\n";

    l.insert_start(1);
    l.insert_start(2);
    l.insert_end(20);
    l.insert_end(15);

    std::cout << "List after insertion: ";
    l.display_node();
    std::cout << "\n";

    l.insert_position(3, 88);
    std::cout << "After insertion: ";
    l.display_node();
    std::cout << "\n";

    l.delete_start();
    l.delete_end();

    std::cout << "List after deletion: ";
    l.display_node();
    std::cout << "\n";

    l.delete_position(2);
    std::cout << "After deletion: ";
    l.display_node();
    std::cout << "\n";

    return 0;
}
