import java.util.*;

public class MaxMin{

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		int min = Integer.MAX_VALUE;
		int max = Integer.MIN_VALUE;
		
		while( in.hasNext() ){
			int x = in.nextInt();
			if( x < min ) min = x;
			if( x > max ) max = x;
		}
		
		System.out.println( min + " " + max );
	}

}
