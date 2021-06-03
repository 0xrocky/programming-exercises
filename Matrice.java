import java.util.*;

public class Matrice{

	public static int[] sommaRiga( int [][] matrice ){
		int nRighe = matrice.length;
		int nColonne = matrice[0].length;
		int [] arr = new int[ nRighe ];
		for( int i = 0; i < nRighe; i++ )
			for( int j = 0; j < nColonne; j++ )
				arr[ i ] += matrice[ i ][ j ];
		return arr;
	}
	
	public static int[] sommaColonna( int [][] matrice ){
		int nRighe = matrice.length;
		int nColonne = matrice[0].length;
		int [] arr = new int[ nColonne ];
		for( int i = 0; i < nColonne; i++ )
			for( int j = 0; j < nRighe; j++ )
				arr[ i ] += matrice[ j ][ i ];
		return arr;
	}
	
	public static int[] minimoRiga( int [][] matrice ){
		int nRighe = matrice.length;
		int nColonne = matrice[0].length;
		int[] min = new int[ nRighe ];
		for( int k = 0; k < nRighe; k++ )
			min[ k ] = Integer.MAX_VALUE;
			
		for( int i = 0; i < nRighe; i++ ){
			for( int j = 0; j < nColonne; j++ ){
				int corr = matrice[ i ][ j ];
				if( min[ i ] > corr ) min[ i ] = corr;
			}
		} return min;
	}
	
	public static int[] minimoColonna( int [][] matrice ){
		int nRighe = matrice.length;
		int nColonne = matrice[0].length;
		int[] min = new int[ nColonne ];
		for( int k = 0; k < nRighe; k++ )
			min[ k ] = Integer.MAX_VALUE;
			
		for( int i = 0; i < nColonne; i++ ){
			for( int j = 0; j < nRighe; j++ ){
				int corr = matrice[ j ][ i ];
				if( min[ i ] > corr ) min[ i ] = corr;
			}
		} return min;
	
	}
	
	public static int sommaMatrice( int [][] matrice ){
		int nRighe = matrice.length;
		int somma = 0;
		int [] arr = sommaRiga( matrice );
		for( int i = 0; i < nRighe ; i++ )
			somma += arr[ i ];
		return somma;
	}
	
	public static int minimoMatrice( int [][] matrice ){
		int nRighe = matrice.length;
		int nColonne = matrice[0].length;
		int min = Integer.MAX_VALUE;
		for( int i = 0; i < nRighe; i++ ){
			for( int j = 0; j < nColonne; j++ ){
				int corr = matrice[ i ][ j ];
				if( min > corr ) min = corr;
			}
		} return min;
	}
	
	public static boolean simmetrica(  int [][] matrice  ){
		int nRighe = matrice.length;
		int nColonne = matrice[0].length;
		if( nRighe != nColonne )return false;
		for( int i = 0; i < nRighe; i++ )
			for( int j = 0; j < nColonne; j++ )
				if( matrice[i][j] != matrice[j][i] )return false;
				
		return true;
	}
	
	public static boolean perfetta(  int [][] matrice  ){
		int nRighe = matrice.length;
		int nColonne = matrice[0].length;
		int [] righe = sommaRiga( matrice  );
		int [] colonne = sommaColonna( matrice  );
		for( int i = 0; i < nRighe; i++ )
			for( int j = 0; j < nColonne; j++ )
				if( righe[i] != colonne[j] )return false;
				
		return true;
				
	}
	

	public static void main( String [] args ){
	
		int [][] matrice = new int[][] { { 1,2,1 },
		                                 { 2,1,1 },
		                                 { 1,1,2 },
		                               };
		                           
		System.out.println( Arrays.toString( sommaRiga( matrice ) ) );
		System.out.println( Arrays.toString( sommaColonna( matrice ) ) );
		System.out.println( Arrays.toString( minimoColonna( matrice ) ) );
		System.out.println( Arrays.toString( minimoRiga( matrice ) ) );
		System.out.println( minimoMatrice( matrice ) );
		System.out.println( sommaMatrice( matrice ) );
		System.out.println( simmetrica( matrice ) );
		System.out.println( perfetta( matrice ) );
	
	}

}
