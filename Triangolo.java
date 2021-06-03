import java.util.*;

public class Triangolo{

	public static void riproduci( char c, int n ){
		for( int i = 0; i < n; i++ )
			System.out.print( c );
	}

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		int N = in.nextInt();
		int spazi = N-1;
		for( int i = 0; i <= N; i+=2 ){
			riproduci( ' ',spazi );
			riproduci( '*', i );
			riproduci( ' ',spazi-- );
			System.out.println();
		}

		System.out.println();
		int x = N;
		for( int i = 0; i <= N; i++ ){
			riproduci( ' ', i );
			riproduci( '*',x );
			x -= 2;
			System.out.println();
		}			
	
	}

}
