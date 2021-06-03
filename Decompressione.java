import java.io.*;

public class Decompressione{

	public static void decomprimi( char c, int n ){
		for( int i = 0; i < n; i++ )
			System.out.print(c);
	}

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String str = in.readLine();
		char corr = 'a';
		
		for( int i = 0; i < str.length(); i++ ){
			decomprimi( corr, Integer.parseInt( str.charAt(i) + ""  ) );
			if( corr == 'a' )corr = 'b';
			else corr = 'a';
		}
		System.out.println();
	
	}

}
