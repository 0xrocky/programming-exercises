import java.util.*;

public class SequenzaCrescente{

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		int dim = 2;
		int [] arr = new int[ dim ];
		int pos = 0;
		// lunghezza di un array di interi non fissato a priori
		for( ; ; ){
			int num = in.nextInt();
			if( num == 0 ) break;
			arr[ pos ] = num;
			pos++;
			if( pos == dim ){
				int [] nuovo = new int[ dim*2 ];
				for( int i = 0; i < dim; i++ )
					nuovo[i] = arr[i];
					arr = nuovo;
					dim *= 2;
			}
		}
		// ridimensionamento dell'array
		dim = pos;
		int [] nuovo = new int[ dim ];
		for( int i = 0; i < dim; i++ )
			nuovo[i] = arr[i];
		arr = nuovo;
		// array in ordine crescente
		for( int i = 0; i < dim-1; i++ ){
			int min = i;
			for( int k = i+1; k < dim; k++ )
				if( arr[k] < arr[min] ) min = k;
			
			int change = arr[i];
			arr[i] = arr[min];
			arr[min] = change;
		}
			
		// stampa della sequenza
		for( int i = 0; i < dim; i++ )
			System.out.print( arr[i] + " " );
		System.out.println();
		
		
	}

}
