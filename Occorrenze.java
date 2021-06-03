import java.io.*;

public class Occorrenze{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String str = in.readLine();
		str = str.toLowerCase();
		
		int [] alfabeto = new int ['z'-'a'+1];
		for( int i = 0; i < str.length(); i++  )
			alfabeto[ str.charAt(i) - 'a' ]++;
		
		char corr = 'a';
		for( int i = 0; i < alfabeto.length; i++  ){
			if( alfabeto[i] != 0 ) System.out.println( alfabeto[i] + " " + corr );
			corr++;
		}
	}

}
