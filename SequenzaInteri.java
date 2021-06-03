import java.util.*;

public class SequenzaInteri{

	public static void main( String [] args ){
		
		Scanner in = new Scanner( System.in );
		
		int dim = 2;
		int[] tabella = new int[ dim ];
		int pos = 0;
				
		for( ; ; ){
			int x = in.nextInt();
			if( x == 0 ) break;
			tabella[ pos ] = x;
			pos++;
			if( pos == dim ){
				int [] nuova = new int[ dim*2 ];
				for( int i = 0; i < dim; i++ )
					nuova[i] = tabella[i];
					tabella = nuova;
					dim *= 2;
			}
		}
		
		for( int i = 0; i < pos; i++ )
			System.out.print( tabella[i] + " " );
		System.out.println();
	}

}
