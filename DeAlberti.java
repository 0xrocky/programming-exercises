import java.io.*;

public class DeAlberti{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String testoChiaro = in.readLine();
		testoChiaro = testoChiaro.toUpperCase();
		String indice = in.readLine();
		indice = indice.toUpperCase();
		char indix = ( indice.charAt(0) );
		
		for( int i = 0; i < testoChiaro.length(); i++ )
			System.out.print( (char)( ( ( testoChiaro.charAt( i )+indix )%26)+'A' ) );
			
		System.out.println();
	
	}

}
