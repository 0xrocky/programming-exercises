import java.io.*;

public class Compressione{

	public static void main( String [] args )throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String str = in.readLine();
		str = str.toLowerCase();
		int occ = 0, lung = str.length()-1;
		char corr = 'a';
		
		for( int i = 0; ; i++ ){
			char c = str.charAt( i );
			if( c == corr ) occ++;
			else{ 
				if( occ != 0 )System.out.print( corr + "" + occ + " " );
				occ = 1;
				corr = c;
		        }
		        if( i == lung ){
		        	System.out.print( corr + "" + occ );
		        	break;}
		 }
		 
 		System.out.println();
	}

}
