class Node:
    def __init__(self,data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = Node(None)
    
    def display(self):
        p = self.head
        while(p):
            print(p.data)
            p = p.next
    
    def create(self,arr):
        p = self.head
        p.data = arr[0]
        last = p 
        for i in arr:
            temp = Node(i)
            last.next = temp 
            last =  temp
    
    def __len__(self):
        p = self.head
        count = 0
        while(p):
            count += 1
            p = p.next
        return count 

if __name__ == "__main__":
    l = LinkedList()
    l.head.data = 9
    l.create((1,2,3,4))

    l.display()
    print("length link list")
    print(len(l))