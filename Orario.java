import java.util.*;

public class Orario implements Comparable<Orario>{

	private int ore, minuti;
	private static char separatore = ':';
	
	public Orario( int hh,int mm ){
		ore = hh;
		minuti = mm;
	}

	public Orario(){
		GregorianCalendar now = new GregorianCalendar();
		ore = now.get( Calendar.HOUR_OF_DAY );
		minuti = now.get( Calendar.MINUTE );
	}
	
	public Orario( String s ){
		ore = Integer.parseInt( s.substring( 0,2 ) );
		minuti = Integer.parseInt( s.substring( 3,5 ) );
	}
	
	public int getOre(){
		return ore;
	}
	
	public int getMinuti(){
		return minuti;
	}
	
	public static void setSeparatore( char c ){
		separatore = c;
	}
	
	public static char getSeparatore(){
		return separatore;
	}
	
	public boolean equals( Orario o ){
		return ( ( this.ore == o.ore ) && ( this.minuti == o.minuti ) );
	}
	
	public boolean equals( Object o ){
		if( this == o ) return true;
		if( !( o instanceof Orario ) ) return false;
		Orario nuovo = ( Orario )o;
		return ( this.equals( nuovo ) );
	}
	
	public int hashCode(){
		int result = 17;
		result *= 37+ore;
		result *= 37+minuti;
		return result;
	}
		
	
	public boolean isMinore( Orario o ){
		return ( ( this.ore < o.ore ) || ( ( this.ore == o.ore ) && ( this.minuti == o.minuti ) ) );
	}
	
	public boolean isMaggiore( Orario o ){
		return ( ( this.ore > o.ore ) || ( ( this.ore == o.ore ) && ( this.minuti > o.minuti ) ) );
	}
	
	public String quantoManca( Orario o ){
		int diff = ( Math.abs( (o.ore-this.ore) ) )*60 + Math.abs( o.minuti-this.minuti );
		return( diff/60 + "" + separatore + "" + diff%60  );
	}
	
	public String toString(){
		String s = "";
		if( ore < 10 ) s = "0" + ore;
		else s = "" + ore;
		s+= separatore;
		if( minuti < 10 ) s+= "0" + minuti;
		else s+= "" + minuti;
		return s;
	}
	
	public int compareTo( Orario o ){
		if( this.equals( o ) ) return 0;
		if( this.isMinore( o ) ) return -1;
		return 1;
	}
	
	
}
