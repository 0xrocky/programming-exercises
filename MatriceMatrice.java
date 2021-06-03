import java.util.*;

public class MatriceMatrice{

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
		
		str = in.nextLine();
		stk = new StringTokenizer( str );
		int dimB = stk.countTokens();
		int [][] b = new int[ dimB ][dimB];
		if( dim != dimB ) return;
		for( int i = 0; i < dimB; i++ )
			b[ i ] = Integer.parseInt( stk.nextToken() );
		for( int i = 0; ; i++ ){
			for( int j = 0; j < dimB; j++ )
				b[ i ][ j ] = Integer.parseInt( stk.nextToken() );
			if( i == dimB-1 )break;
			str = in.nextLine();
			stk = new StringTokenizer( str );
		}
		
		int [][] ris = new int[dim][dim];
		for( int i = 0; i < dim; i++ )
			for( int j = 0; j < dim; j++ )
				for( int k = 0; k < dim; k++ )
					ris[i][j] += a[i][k]*b[k][j];
		
		
	}

}
