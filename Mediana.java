import java.util.*;

public class Mediana{

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		
		int dim = 2;
		int pos = 0;
		int [] arr = new int [ dim ];
		// creo un array di grandezza non fissata a  priori
		for( ;; ){
			int x = in.nextInt();
			if( x == 0 ) break;
			arr[ pos++ ] = x;
			if( pos == dim ){
				int [] nuovo = new int[ dim*2 ];
				for( int i = 0; i < dim; i++ )
					nuovo[ i ] = arr[ i ];
				dim *= 2;
				arr = nuovo;
			}
		}
		// lo ridimensiono
		dim = pos;
		int [] nuovo = new int[ dim ];
		for( int i = 0; i < dim; i++ )
			nuovo[i] = arr[i];
		arr = nuovo;
		
		// ordino crescentemente
		for( int i = 0; i < dim-1; i++ ){
			int min = i;
			for( int k = i+1; k < dim; k++ )
				if( arr[ k ] < arr[ min ] ) min = k;
			int t = arr[i];
			arr[i] = arr[min];
			arr[min] = t;
		}

		int mediana = 0, moda = 0;
		if( ( dim % 2 ) != 0 ) mediana = arr[ (dim+1)/2 - 1 ];
		else { mediana = ( ( arr[ dim/2 - 1 ] + arr[ dim/2 ] ) / 2); }

		int count = 0, maxFreq = 0;
		for( int i = 1; i < dim; i++ ){
			if( maxFreq <= count ){
					maxFreq = count;
					moda = arr[i-1];
			}
			if( arr[i-1] == arr[i] ) count++;
			else count = 0;
		}
		for( int i = 0; i < dim; i++ )
			System.out.print( arr[i] + " " );
		System.out.println();
		System.out.println("Mediana: " + mediana + " - moda: " + moda );
	}

}
