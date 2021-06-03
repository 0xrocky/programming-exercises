import java.io.*;

public class Calcolatrice{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		int x = Integer.parseInt( in.readLine() );
		int y = Integer.parseInt( in.readLine() );
		char operator = (char) in.read();
		
		
		switch( operator ){
			case '+': System.out.println( x+y );return;
			case '-': System.out.println( x-y );return;
			case '*': System.out.println( x*y );return;
			case '/': System.out.println( x/y );return;
			case '%': System.out.println( x%y );return;
		}
	}

}
