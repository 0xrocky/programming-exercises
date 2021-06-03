import java.io.*;

public class Permutazioni{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String testoChiaro = in.readLine(), var = "";
		int lung = testoChiaro.length();
		
		char [] corrente = testoChiaro.toCharArray();
		char [] nuovo = new char[ lung ];
		
		while( ( var = in.readLine() ) != null ){
			int indice = Integer.parseInt( var );
			for( int i = 0; i < lung; i++ ){
				nuovo[i] = corrente[(i+indice)%lung];
			}
			char [] t = corrente;
			corrente = nuovo;
			nuovo = t;
			
			for( int i = 0; i < lung; i++ )
				System.out.print( corrente[i] );
			System.out.println();
		}
		

	
	}

}
