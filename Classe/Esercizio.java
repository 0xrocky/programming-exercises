import java.io.*;
import java.util.*;

public class Esercizio{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		
		String studente = in.readLine();
		StringTokenizer stk = new StringTokenizer( studente );
		Studente michele = new Studente( stk.nextToken(), stk.nextToken(), Integer.parseInt( stk.nextToken() ) );
		
		String esame , tipoEsame = null;
		int voto, lode = 0;
		while( ( esame = in.readLine() ) != null ) {
			stk = new StringTokenizer( esame,"#" );
			tipoEsame = stk.nextToken();
			voto = Integer.parseInt( stk.nextToken() );
			if( voto > 30 ) lode = voto-30;
			else lode = 0;			
			Esame generico = new Esame( tipoEsame, voto );
			generico.impostaLode( lode );
			michele.registra( generico );
		}
		
		
	
	}

}
