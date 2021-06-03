import java.io.*;

public class OccorrenzeLettere{

	public static void main( String [] args ) throws IOException{
	
		BufferedReader in = new BufferedReader( new InputStreamReader( System.in ) );
		String str = null;
		int [] arrOccorrenze = new int[ 'z'-'a'+1 ];
		char corr = '0';
		String stringone = "";
		
		while( ( str = in.readLine() ) != null ){
			str = str.toLowerCase();
			stringone += str;
			for( int i = 0; i < str.length(); i++ ){
				corr = str.charAt(i);
				if( Character.isLetter( corr ) ) arrOccorrenze[ corr-'a' ]++;
			}
		}

		boolean [] viste = new boolean[26];
		for( int i = 0; i < stringone.length(); i++ ){ 
			corr = stringone.charAt(i);
			if( Character.isLetter( corr ) ){
				int pos = corr-'a';
				int occ = arrOccorrenze[pos];
				if( viste[pos] != true && occ != 0 ){
					System.out.print( corr + " " + occ );
					System.out.println();
					viste[pos] = true;
				}
			}
		}
	
	}

}
