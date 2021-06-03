public class Inversa{

	public static void main( String [] args ){
	
		String prima = args[ 0 ];
		String seconda = args[ 1 ];
		int nPrima = prima.length();
		int nSeconda = seconda.length();
		if( nPrima != nSeconda ) return;

		for( int i = 0; i < nPrima; i++ )
			if( prima.charAt( i ) != seconda.charAt( ( nSeconda-(i+1) ) ) ) return;
			
		System.out.println( "si" );
	
	}

}
