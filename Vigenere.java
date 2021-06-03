import java.io.*;

public class Vigenere{

	public static void main( String [] args ) throws IOException {
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String testoChiaro = in.readLine();
		testoChiaro = testoChiaro.toUpperCase();
		String verme = in.readLine();
		verme = verme.toUpperCase();
		int lung = testoChiaro.length();
		int nChiave = verme.length();
		char [] testoCifrato = new char[ lung ];
		
		char [] nuovoVerme = new char[ lung ];
		for( int i = 0; i < lung; i++ )
			nuovoVerme[ i ] = (char) ( verme.charAt( i%nChiave ) );
		
		for( int i = 0; i < lung; i++ ){
			testoCifrato[ i ] = (char) ( ( testoChiaro.charAt( i )+nuovoVerme[ i ] )%( 'z'-'a'+1 ) + 'A' );
			System.out.print( testoCifrato[ i ] );
			}
		
		
		System.out.println();
	}
}
