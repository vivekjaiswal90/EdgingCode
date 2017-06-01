/*
Java program to implement dequeue.
*/

import java.io.*;
class dequeue
{
int DQ[] = new int[100];
int n;
int front, rear;
static BufferedReader br = new BufferedReader(newInputStreamReader(System.in));
public dequeue(int nn)
{
n = nn;
front = rear = 0;
}
public void pushrear(int v)
{
if((rear+1)<n)
{
rear++;
DQ[rear] = v;
}
else
System.out.println("Overflow from rear !");
}
public void pushfront(int v)
{
if(front>=0)
{
DQ[front] = v;
front--;
}
else
System.out.println("Overflow from front !");
}
public int popfront()
{
int v;
if(front!=rear)
{
front++;
v = DQ[front];
return v;
}
else
return -9999;
}
public int poprear()
{
int v;
if(front!=rear)
{
v = DQ[rear];
rear--;
return v;
}
else
return -9999;
}
public void display()
{
if(front!=rear)
{
for(int i=front+1;i<=rear;i++)
System.out.println(DQ[i]);
}
else
System.out.println("No element in queue !");
}
public static void main() throws IOException
{
System.out.print("Enter the size of the queue : ");
int size = Integer.parseInt(br.readLine());
dequeue call = new dequeue(size);
int choice;
boolean exit = false;
while(!exit)
{
System.out.print("\n1 : Push from Front\n2 : Push from
Rear\n3 : Delete from Front\n4 : Delete from Rear\n5 : Display\n6 :
Exit\n\nYour Choice : ");
choice = Integer.parseInt(br.readLine());
switch(choice)
{
case 1 :
System.out.print("\nEnter number to be added : ");
int num = Integer.parseInt(br.readLine());
call.pushfront(num);
break;
case 2 :
System.out.print("\nEnter number to be added : ");
int num2 = Integer.parseInt(br.readLine());
call.pushrear(num2);
break;
case 3 :
int popped = call.popfront();
if(popped != -9999)
System.out.println("\nDeleted : " +popped);
break;
case 4 :
int popped2 = call.popfront();
if(popped2 != -9999)
System.out.println("\nDeleted : " +popped2);
break;
case 5 :
call.display();
break;
case 6 :
exit = true;
break;
default :
System.out.println("\nWrong Choice !");
break;
}
}
}
}
