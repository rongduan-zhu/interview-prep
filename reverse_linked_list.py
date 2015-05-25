#!/usr/bin/env python

class Node(object):
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList(object):
    def __init__(self):
        self.head = None
        self.tail = None

    def add_node(self, node):
        if not self.head:
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = node

    def reverse(self):
        self.tail = self.head
        prev_node = self.tail
        cur_node = self.head
        next_node = self.head.next
        self.tail.next = None

        while next_node:
            cur_node = next_node
            next_node = cur_node.next
            cur_node.next = prev_node
            prev_node = cur_node

        self.head = cur_node

    def __str__(self):
        str_list = []
        cur_node = self.head
        str_list.append("Head: {}".format(cur_node.data))
        str_list.append("Tail: {}".format(self.tail.data))

        while cur_node:
            str_list.append(str(cur_node.data))
            cur_node = cur_node.next

        return "\n".join(str_list)

if __name__ == '__main__':
    ll = SinglyLinkedList()

    ll.add_node(Node(1))
    ll.add_node(Node(2))
    ll.add_node(Node(3))
    ll.add_node(Node(4))
    ll.add_node(Node(5))

    print ll
    ll.reverse()
    print ll
