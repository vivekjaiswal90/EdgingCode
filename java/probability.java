import java.util.Random;

class ProbGen

{

                public static void main(String ar[])

                {

                /*

                no_x,no_y,no_z are variables to count the no. of x,y and

                z respectevily in the output of the test.

                */

                 int i,no_x=0,no_y=0,no_z=0;

                 float rand=0;

                 for(i=0;i<10000;i++)

                 {

                 /*

                  Random.nextFloat() generates a float from 0.0 (inlcusive)

                  to 1.0 (exclusive).

                 */

                 rand = new Random().nextFloat(); // [0;1)

                 if(rand>=0.0 && rand<0.1)

                   {

                   System.out.print("x");

                   no_x++;

                   }

                   else if(rand>=0.1 && rand<0.4)

                    {

                     System.out.print("y");

                                 no_y++;

                    }else

                                 {

               System.out.print("z");

                                 no_z++;

                     }

                 }

                System.out.println("\nNo of x="+no_x+"\nNo of y="+no_y+"\nNo of Z="+no_z);

                }

}          
