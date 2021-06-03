import java.io.*;
import java.util.*;

public class Derivate{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String var = in.readLine();
		StringTokenizer stk = new StringTokenizer( var, " + ");
		
		int parametro = 0;
		int potenza = 0;
		int lung = 0;
		
		StringBuilder b = new StringBuilder();
		
		while( stk.hasMoreTokens() ) {
			var = stk.nextToken();
			lung = var.length();
			for( int i = 0; i < lung; i++ )
				if( Character.isLetter( var.charAt(i) ) ){
					parametro = Integer.parseInt( var.substring( 0,i ) );
					//caso 0*x
					if( parametro == 0 ) break;
					//caso in cui potenza == 1 ( 4*x )
					if( i == lung-1 ) potenza = 1;
					//caso regolare
					else potenza = Integer.parseInt( var.substring( i+2 ) );
					parametro *= potenza;
					potenza--;
					b.append(parametro);
					if( potenza == 0 ) {b.append(" + "); break; }
					else b.append( var.charAt(i) );
					if( potenza == 1 ) {b.append(" + "); break; }
					else b.append("^" + potenza );
					b.append( " + " );
				}
				//caso della costante
				else b.append("");
		
		}
		
		stk = new StringTokenizer( b.toString(), " + " );
		int cont = stk.countTokens();
		while( stk.hasMoreTokens() ) {
			cont--;
			System.out.print( stk.nextToken() );
			if( cont == 0 ) { System.out.println(); break; }
			System.out.print( " + " );
		}
		
	}

}
