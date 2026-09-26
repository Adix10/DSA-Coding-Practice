Linked List End Insertion



Problem



Given the head of a Singly Linked List and a value x, insert x at the end of the linked list and return the head of the modified linked list.



Approach



Create a new node containing x.



If the linked list is empty, return the new node as the head.



Otherwise, traverse the linked list until the last node.



Connect the last node to the new node.



Return the original head.



Example



Input:

1 -> 2 -> 3 -> 4 -> 5

x = 6



Output:

1 -> 2 -> 3 -> 4 -> 5 -> 6



Complexity



Time Complexity: O(n)



Space Complexity: O(1)



Platform



GeeksforGeeks



Difficulty



Basic



