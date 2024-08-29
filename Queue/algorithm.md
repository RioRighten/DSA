Let Q be the array of some specified size say SIZE 

# Inserting an element into the Queue

1. Set Initial front = -1, rear = -1
2. If rear = SIZE-1 then
    (a) Display "Queue Overflow"
    (b) Exit
3. Else
    (a) Input the value to be inserted and assign the variable "data"
    (b) rear = rear + 1
    (c) Q[rear] = data
4. Exit

# Deleting an element from the Queue

1. If rear = front then
    (a) Display "Queue is Empty"
    (b) Exit
2. Else 
    (a) front = front + 1
    (b) data = Q[front]
3. Exit