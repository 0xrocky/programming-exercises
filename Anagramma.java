public class Anagramma{

	public static void main( String [] args ){
	
		String prima = args[0];
		String seconda = args[1];
		
		int lung = prima.length();
		if( lung != seconda.length() ) return;
		int [] alfabeto = new int ['z'-'a'+1];
		
		for( int i = 0; i < lung; i++ ){
			alfabeto[ ( prima.charAt(i) ) - 'a' ]++;
			alfabeto[ ( seconda.charAt(i) ) - 'a' ]--;
		}
		for( int i = 0; i < lung; i++ )
			if( alfabeto[i] != 0 ) return;
			
		System.out.println("anagrammi");
		
	}

}

