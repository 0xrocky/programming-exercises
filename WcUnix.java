import java.io.*;
import java.util.*;

public class WcUnix{


	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		StringTokenizer stk = null;
		int contaRiga = 0, contaParola = 0, contaLettera = 0;
		
		String str = "";
		while( ( str = in.readLine() ) != null ){
			contaRiga++;
			stk = new StringTokenizer( str," ,.;:-?\"\'" );
			contaParola += stk.countTokens();
			while( stk.hasMoreTokens() )
				contaLettera += ( ( stk.nextToken() ).toString() ).length();
			
		}
		System.out.println( contaRiga + "Righe" );
		System.out.println( contaParola + "Parole" );
		System.out.println( contaLettera + "Lettere" );	
	}

}

