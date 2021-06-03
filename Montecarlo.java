import java.util.*;
import java.io.*;

public class Montecarlo{

	public static void main( String [] args ) throws IOException{
	
	Scanner in = new Scanner( System.in );
	
	double y = in.nextDouble(), x = in.nextDouble();
	double base = y - x;
	double altezza = Math.log(y);
	
	int totali = 1000, successi = 0;
	
	Random generatore = new Random();
	for( int i = 0; i < totali; i++ ){
		double r = generatore.nextDouble()*base + x;
		double s = generatore.nextDouble()*altezza;
		if( s < Math.log(r) ) successi++;
	}

	double area = base * altezza;
	double integrale = (area*successi)/totali;
	
	System.out.println(integrale);
	
	}

}
