import java.util.*;

public class MatriceVettore{

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		String str = in.nextLine();
		StringTokenizer stk = new StringTokenizer( str );
		int dim = stk.countTokens();
		int [][] a = new int[ dim ][ dim ];
		
		for( int i = 0; ; i++ ){
			for( int j = 0; j < dim; j++ )
				a[ i ][ j ] = Integer.parseInt( stk.nextToken() );
			if( i == dim-1 )break;
			str = in.nextLine();
			stk = new StringTokenizer( str );
		}
		
		int [] vett = new int[ dim ];
		str = in.nextLine();
		stk = new StringTokenizer( str );
		for( int i = 0; i < dim; i++ )
			vett[ i ] = Integer.parseInt( stk.nextToken() );
		
		int [] ris = new int[ dim ];	
		for( int i = 0; i < dim; i++ ){
			for( int j = 0; j < dim; j++ )
				ris[ i ] += a[i][j] * vett[j];
		}
		
		System.out.println( Arrays.toString( ris ) );
		
		
	}

}
