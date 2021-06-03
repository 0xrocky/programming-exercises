import java.util.*;

public class Data implements Comparable< Data >{

	private int giorno, mese, anno;
	private static char separatore = '.';
	
	public Data( int gg, int mm, int aaaa ){
		giorno = gg;
		mese = mm;
		anno = aaaa;
	}
	
	public Data( String s ){
		giorno = Integer.parseInt( s.substring( 0,2 ) );
		mese = Integer.parseInt( s.substring( 3,5 ) );
		anno = Integer.parseInt( s.substring( 6,10 ) );
	}
	
	public int getGiorno(){
		return giorno;
	}

	public int getAnno(){
		return anno;
	}
	
	public int getMese(){
		return mese;
	}

	public static char getSeparatore(){
		return separatore;
	}

	public static void setSeparatore( char c ){
		separatore = c;
	}
	
	public boolean equals( Data a ){
		return( giorno == a.giorno && mese == a.mese && anno == a.anno );
	}
	
	public boolean equals( Object a ){
		if( this == a ) return true;
		if( !( a instanceof Data ) ) return false;
		Data nuova = ( Data )a;
		return ( this.equals( nuova ) );
	}
	
	public int hashCode(){
		int result = 17;
		result *= 37+giorno;
		result *= 37+mese;
		result *= 37+anno;
		return result;
	}
		
	public boolean isMinore( Data a ){
		return( ( anno < a.anno ) || ( anno == a.anno && mese < a.mese ) || ( anno == a.anno && mese == a.mese && giorno < a.giorno ) );
	}
	
	public boolean isMaggiore( Data a ){
		return( ( anno > a.anno ) || ( anno == a.anno && mese > a.mese ) || ( anno == a.anno && mese == a.mese && giorno > a.giorno ) );
	}
	
	public int compareTo( Data a ){
		if( this.equals( a ) )return 0;
		if( this.isMinore( a ) )return -1;
		return 1;
	}
	
	public String quantoManca( Data a ){
		return( ( anno-a.anno ) + "." + ( mese-a.mese ) + "." + ( giorno-a.giorno ) );
	}
	
	public String toString(){
		return giorno + "" + separatore + "" + mese + "" + separatore + "" + anno;
	}
	
}


