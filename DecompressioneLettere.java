import java.io.*;

public class DecompressioneLettere{

	public static void decomprimi( char c, int n ){
		for( int i = 0; i < n; i++ )
			System.out.print(c);
	}

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String str = in.readLine(), occ = "";
		char c = ' ';
		
		for( int i = 0; i < str.length(); i++ ){
			c = str.charAt(i);
			if( Character.isDigit( c ) ) occ += ( c + "" ) ;
			else { decomprimi( c, Integer.parseInt( occ ) ); occ = ""; }
			
		}
		System.out.println();
	
	}

}
