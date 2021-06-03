import java.io.*;

public class Istogramma{

	public static void riproduci( int n ){
		for( int i = 0; i < n; i++ )
			System.out.print( '*' );
		System.out.println();		
	}

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String str = in.readLine();
		str = str.toUpperCase();
		int [] a = new int[ 'z'-'a'+1 ];
		
		for( int i = 0; i < str.length(); i++ )
			a[  str.charAt( i )-'A' ]++;
			
		for( int i = 0; i < 26; i++ ){
			int occ = a[i];
			if( occ != 0 ) { System.out.print( (char)('A'+i ) + " "); riproduci( occ ); }
		}
		
	
	}

}
