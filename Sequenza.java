import java.util.*;

public class Sequenza{

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		final int N = in.nextInt();
		int [] arr = new int[ N ];
		int lung = 0, corr = 0;
		
		while( in.hasNext() ){
			corr = in.nextInt();
			if( corr >= N )return;
			arr[ lung ] = corr;
			lung++;
			if( lung > N )return;
		}
		
		
		Arrays.sort( arr );
		for( int i = 1; i < N; i++ )
			if( arr[ i-1 ] == arr[ i ] )return;
			
		System.out.println("si");

	
	}

}
