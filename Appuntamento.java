import java.util.*;

public class Appuntamento implements Comparable< Appuntamento > {
	
	Data data;
	Orario ora;
	String descrizione;

	public Appuntamento( Data d, Orario o, String s ){
		data = d;
		ora = o;
		descrizione = s;
	}

	public Appuntamento( String d, String o, String s  ){
		data = new Data( d );
		ora = new Orario( o );
		descrizione = s;
	}
	
	public Appuntamento( int gg, int mm, int aaaa, int hh, int min, String s  ){
		data = new Data( gg, mm, aaaa );
		ora = new Orario( hh, min );
		descrizione = s;
	}
	
	public boolean equals( Appuntamento altro ){
		return( ( data.equals( altro.data ) ) && ( ora.equals( altro.ora ) ) && ( descrizione.equals( altro.descrizione ) ) );
	}
	
	public boolean equals( Object altro ){
		if( this == altro )return true;
		if( !( altro instanceof Appuntamento ) )return false;
		Appuntamento a = ( Appuntamento )altro;
		return this.equals( a );
	}
	
	public int hashCode(){
		int result = 17;
		result *= 37+data.hashCode();
		result *= 37+ora.hashCode();
		result *= 37+descrizione.hashCode();
		return result;
	}
	
	public boolean precedente( Appuntamento a ){
		return( data.isMinore( a.data ) || ( data.equals( a.data ) && ora.isMinore( a.ora ) ) );
	}
	
	public int compareTo( Appuntamento a ){
		if( this.equals( a ) )return 0;
		if( this.precedente( a ) )return -1;
		return 1;		
	}
	
	public String toString(){
		return data + " " + ora + " " + descrizione;
	}

	
	 
}
