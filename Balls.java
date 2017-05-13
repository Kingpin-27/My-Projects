import java.util.Scanner;

public class Balls 
{
	static int Blue,Red,Green,Yellow;
	Balls()
	{
		Blue=Green=Red=Yellow=0;
	}
	static void print()
	{
		System.out.println("Red Balls    : "+Red);
		System.out.println("Green Balls  : "+Green);
		System.out.println("Blue Balls   : "+Blue);
		System.out.println("Yellow Balls : "+Yellow);
	}
	static void colour(String a)
	{ 
		if((Red + Green + Blue + Yellow)==12)
			System.out.println("Can not add more than 12 balls in bag");
		if(a=="b"||a=="B")
			Blue++;
		if(a=="g"||a=="G")
		{	
			if(Green<3)
				Green++;
			else
				System.out.println("Green Balls have exceeded limit(3)");
		}	
		if(a=="r"||a=="R")
		{
			if(Red==Green)
				System.out.println("Red Balls can not be more than Green Balls");
			else
				Red++;
		}
		if(a=="y"||a=="Y")
		{
			if(Blue==0)
				System.out.println("There must be a minimum of 1 Blue Ball before adding a Yellow Ball");
			else
				Yellow++;
		}
		print();
	}
	public static void main(String[] args) 
	{					
		System.out.print("Ball colour : ");
		Scanner s = new Scanner(System.in);
		String input = s.next();
		colour(input);
		System.out.print("Do you want to continue adding Balls? ");
		String decide = s.next();
		if(decide=="Y"||decide=="y")
			main(args);		
		s.close();
	}

}
