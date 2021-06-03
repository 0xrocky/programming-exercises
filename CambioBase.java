import java.util.*;

public class CambioBase{

	public static void main( String [] args ){
	
		int base = Integer.parseInt( args[0] );
		String daConvert = args[1];
		
		StringBuilder b = new StringBuilder();
		
		int n = daConvert.length()-1;
		char cifra = 'x';
		long somma = 0;
		
		
		for( int i = 0; i <= n; i++ ){
			cifra = daConvert.charAt(i);
			if( (cifra-'0') >= 10 ) somma += ((cifra-'A')+10)*(Math.pow(16,(n-i)));
			else somma += (cifra-'0')*(Math.pow(16,(n-i)));
		}
		while( somma > 0 ){
			b.append( (somma%base) );
			somma = somma/base;
		}
		
		System.out.println( (b.reverse()).toString() );
	}

}
