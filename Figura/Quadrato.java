public class Quadrato extends Rettangolo {
	
	public Quadrato( double x ){
		super( x, x );
	}
	
	public double getLato(){
		return getBase();
	}
	
	public void setLato( double x ){
		setBase( x );
		setAltezza( x );
	}
	
	public boolean equals( Quadrato q ){
		return( getBase() == q.getBase() );
	}
	
	public boolean equals( Object o ){
		if( this == o )return true;
		if( !( o instanceof Quadrato ) )return false;
		Quadrato q =( Quadrato )o;
		return( this.equals( q ) );
	}
	
	public int hashCode(){
		int result = 17;
		long f = Double.doubleToLongBits( getLato() );
		result *= 37+( (int)(f^(f>>>32) ) );
		return result;
	}
	
	public String toString(){
		double lato = getLato();
		for( int i = 0; i < lato; i++ ){
			for( int j = 0; j < lato; j++ )
				System.out.print('*');
			System.out.println();
		}
		return "";
	}
	

}
