import java.io.*;

public class Parentesi{

	public static void main( String [] args ) throws IOException {
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String str = in.readLine();
		
		int indic = 0;
		for( int i = 0; i < str.length(); i++ ){
			char corr = str.charAt(i);
			if( corr == ')' )indic++;
			if( corr == '(' )indic--;
			if( indic > 0 ){ 
				System.out.println("Parentesi chiusa di troppo in posizione " + (i+1) );
				return;
			}
		}	if( indic < 0 )
				System.out.println("Ci sono parentesi aperte e non chiuse" );
		
	
	}

}
