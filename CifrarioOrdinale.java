
import java.io.*;

public class CifrarioOrdinale{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String testoChiaro = in.readLine();
		testoChiaro = testoChiaro.toUpperCase();
		int indice = Integer.parseInt( in.readLine() );

		
		for( int i = 0; i < testoChiaro.length(); i++ )
			System.out.print( (char)( ( ( testoChiaro.charAt( i )+'A'+indice )%26)+'A' ) );
			
		System.out.println();
	
	}

}
