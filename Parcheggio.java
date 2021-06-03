import java.io.*;
import java.util.*;

public class Parcheggio{

	public static void main( String [] args ) throws IOException {
		
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String parcheggio = in.readLine();
		String veicoli = in.readLine();
		StringTokenizer stk = new StringTokenizer( parcheggio );
		int nParcheggi = stk.countTokens();
		int [] park = new int[ nParcheggi ];
		
		for( int i = 0; i < nParcheggi; i++ )
			park[ i ] = Integer.parseInt( ( stk.nextToken() ).toString() );
			
		stk = new StringTokenizer( veicoli );
		while( stk.hasMoreTokens() ){
			int veicolo = Integer.parseInt( ( stk.nextToken() ).toString() );
			for( int i = 0; i < nParcheggi; i++ ){
				if( park[ i ] == veicolo ){ 
					park[ i ] = 0;
					break;
				}
			}
		}
		
		for( int i = 0; i < nParcheggi; i++ ){
			int corr = park[ i ];
			if( corr != 0 ) System.out.print( corr + " " );
		}
			
		System.out.println();
			
		
			
		
		
	}

}
