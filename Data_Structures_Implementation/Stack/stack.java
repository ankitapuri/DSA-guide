class CQStack
{
  public int maxSize; // size of stack array
  public int[] stackArray;
  public int top; // top of stack

  public CQStack(int s) // constructor
  {
    maxSize=s;
    stackArray=new int[s];
    top=-1;
  }

  public void push(int j) // put item on top of stack
  {
    if(isFull())
    {}
    stackArray[++top]=j;
  }
  
  public int pop() // take item from top of stack
  {
    if(isEmpty())
    {
      return -1;
    }
    return stackArray[top--];
  }

  public boolean isEmpty() // true if stack is empty
  {
    return (top == -1);
  }

  public boolean isFull() // true if stack is full
  {
    return (top == maxSize-1);
  }
}
