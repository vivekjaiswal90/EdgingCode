/*
Java program to implement Linear Queue.
*/
import java.io.*;
class queue
{
int Q[] = new int[100];
int n, front, rear;
static BufferedReader br = new BufferedReader(new
InputStreamReader(System.in));
public queue(int nn)
{
n=nn;
front = rear = 0;
}
public void add(int v)
{
if((rear+1) <= n)
Q[++rear] = v;
else
System.out.println("Queue is full !");
}
public int del()
{
int v;
if(front!=rear)
{
v = Q[++front];
return v;
}
else
{
System.out.println("\nQueue is empty !");
return -9999;
}
}
public void disp()
{
if(front==rear)
System.out.println("\nQueue is empty !");
else
{
for(int i = front+1; i<=rear;i++)
System.out.println(Q[i]);
}
}
public static void main() throws IOException
{
System.out.print("Enter the size of the queue : ");
int size = Integer.parseInt(br.readLine());
queue call = new queue(size);
int choice;
boolean exit = false;
while(!exit)
{
System.out.print("\n1 : Add\n2 : Delete\n3 : Display\n4 :
Exit\n\nYour Choice : ");
choice = Integer.parseInt(br.readLine());
switch(choice)
{
case 1 :
System.out.print("\nEnter number to be added : ");
int num = Integer.parseInt(br.readLine());
call.add(num);
break;
case 2 :
int popped = call.del();
if(popped != -9999)
System.out.println("\nDeleted : " +popped);
break;
case 3 :
call.disp();
break;
case 4 :
exit = true;
break;
default :
System.out.println("\nWrong Choice !");
break;
}
}
}
}