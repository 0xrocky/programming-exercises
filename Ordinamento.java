import java.util.*;

public class Ordinamento{

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		
		int n = in.nextInt();
		int[] arr = new int[ n ];
		
		for( int i = 0; i < n; i++ ){
			arr[i] = in.nextInt();
		}
		// ricerco il minimo tra arr[i] e arr[n-1]
		for( int i = 0; i < n-1; i++ ){
			int min = i;
			for( int k = i+1; k < n; k++ )
				if( arr[ k ] < arr[ min ] ) min = k;
				
			int t = arr[i];
			arr[i] = arr[min];
			arr[min] = t;
		}
		for( int i = 0; i < n; i++ )
			System.out.print( arr[i] + " " );
		System.out.println();
		
	}
}
