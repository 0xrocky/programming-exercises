import java.io.*;
import java.util.*;


public class MatricePerfetta {

	//metodo sommaRighe
	public static int sommaRighe( int [][] matrice, int numRiga ){
	int somma = 0;
		for( int j = 0; j < matrice[0].length; j++ )
			somma += matrice[numRiga][j];
		return somma;
	}

	//metodo sommaColonne
	public static int sommaColonne( int [][] matrice, int numColonna ){
		int somma = 0;
		for( int i = 0; i < matrice.length; i++ )
			somma += matrice[i][numColonna];
		return somma;
	}

	public static void main( String [] args ) throws IOException {
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		
		String var = in.readLine();
		StringTokenizer stk = new StringTokenizer(var);
		int num = stk.countTokens();
		int [][] matrice = new int [num][num];
		
		//riempio la matrice
		
		for( int i = 0; i < num; i++ ) {
			for( int j = 0; j < num; j++ )
				matrice[i][j] = Integer.parseInt( stk.nextToken() );
			if( i == (num-1) ) break; 
			var = in.readLine();
			stk = new StringTokenizer(var);
		}
		int riferimento = sommaRighe( matrice, 0 );
		for( int i = 1; i < num; i++ )
			if( riferimento != sommaRighe(matrice,i) ) return;
			
		for( int j = 0; j < num; j++ )
			if( riferimento != sommaColonne(matrice,j) ) return;
			
		System.out.println("matrice perfetta");
		
		
	}


}
