Let stk be an array with size 10

# Push operation

1. Set Initial top=-1
2. Input: The value to be pushed (value).
3. Check if the stack is full:
    (a)If top == MAX - 1, print "Stack Overflow" and exit the operation.
4. If not full:
    (a)Increment top by 1.
    (b)Set stack[top] = value.
    (c)Print "Pushed value onto the stack".

# Pop operation

1. Check if the stack is empty:
    (a)If top == -1, print "Stack Underflow" and return -1.
2. If not empty:
    (a)Retrieve value = stack[top].
    (b)Decrement top by 1.
    (c)Return the popped value.

# Display operation

1. Check if the stack is empty:
    (a)If top == -1, print "The stack is empty."
2. If not empty:
    (a)Loop from i = top down to 0:
    (b)Print stack[i].