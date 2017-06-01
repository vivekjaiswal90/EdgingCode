/*
Java program to implement stack.
*/
import java.io.*;
class stacks
{
int s[] = new int[100];
int top, n;
public stacks(int nn)
{
n=nn;
top=-1;
}
public void push(int v)
{
if(top<n-1)
{
top++;
s[top] = v;
}
else
System.out.println("\nStack is full !");
}
public int pop()
{
int v;
if(top>=0)
{
v = s[top];
top--;
return v;
}
else
{
System.out.println("\nStack is empty !");
return -9999;
}
}
public void display()
{
if(top>=0)
{
System.out.println();
for(int i=top;i>=0;i--)
System.out.println(s[i]);
}
else
System.out.println("\nStack is empty !");
}
public static void main(String args[]) throws IOException
{
BufferedReader br = new BufferedReader(new
InputStreamReader(System.in));
System.out.print("Enter the size of the stack : ");
int size = Integer.parseInt(br.readLine());
stacks call = new stacks(size);
int choice;
boolean exit = false;
while(!exit)
{
System.out.print("\n1 : Push\n2 : Pop\n3 : Display\n4 :
Exit\n\nYour Choice : ");
choice = Integer.parseInt(br.readLine());
switch(choice)
{
case 1 :
System.out.print("\nEnter number to be pushed : ");
int num = Integer.parseInt(br.readLine());
call.push(num);
break;
case 2 :
int popped = call.pop();
if(popped != -9999)
System.out.println("\nPopped : " +popped);
break;
case 3 :
call.display();
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
