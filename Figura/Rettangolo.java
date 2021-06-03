public class Rettangolo extends Figura {

	private double b, h;
	
	public Rettangolo( double x, double y ){
		b = x;
		h = y;
	}
	
	public void setBase( double x ){
		b = x;
	}
	
	public void setAltezza( double x ){
		h = x;
	}

	public double area(){
		return b*h;
	}
	
	public double perimetro(){
		return (b+h)*2;
	}
	
	public double getBase(){
		return b;
	}
	
	public double getAltezza(){
		return h;
	}
	
	public boolean equals( Rettangolo o ){
		return( this.getBase() == o.getBase() && this.getAltezza() == o.getAltezza() );
	}
	
	public boolean equals( Object o ){
		if( this == o )return true;
		if( !( o instanceof Rettangolo ) )return false;
		Rettangolo n =( Rettangolo ) o;
		return( this.equals( n ) );
	}
	
	public int hashCode(){
		int result = 17;
		long f = Double.doubleToLongBits( b );
		result *= 37+( (int)(f^(f>>>32) ) );
		f = Double.doubleToLongBits( h );
		result *= 37+( (int)(f^(f>>>32) ) );
		return result;
	}
	
	public String toString(){
		for( int alt = 0; alt < h; h++ ){
			for( int bas = 0; bas < b; bas++ )
				System.out.print('*');
			System.out.println();
		}
		return "";
	}
}
