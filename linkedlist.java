/**
 * linkedlist
 */
public class linkedlist {
    Node head;

    class Node {
        int data;
        Node next;
        Node(int d) {
            data = d;
            next = null;
        }
    }

    public void insertAthead(int d) {
        Node newNode = new Node(d);
        if (head == null) {
            head = newNode;
        } else {
            newNode.next = head;
            head = newNode;
        }
    }

    public void print() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }

    public static void main(String args[]) {
        linkedlist ll = new linkedlist();
        ll.insertAthead(0);
        ll.insertAthead(1);
        ll.print();
    }
}
