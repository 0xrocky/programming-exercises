public class Cerchio extends Figura{

	private double r;
	
	public Cerchio( double x ){
		r = x;
	}
	
	public double getRaggio(){
		return r;
	}
	
	public void setRaggio( double x ){
		r = x;
	}
	
	public double area(){
		return r*r*Math.PI;
	}
	
	public double perimetro(){
		return 2*r*Math.PI;
	}
	
	public String toString(){
		for( int i = 0; i < r; i++ ){
			for( int j = 0; j < r; j++ )
				System.out.print('*');
			System.out.println();
		}
		return "";
	}
	
	public boolean equals( Cerchio c ){
		return( r == c.r );
	}
	
	public boolean equals( Object o ){
		if( this == o )return true;
		if( !( o instanceof Cerchio ) )return false;
		Cerchio c =( Cerchio )o;
		return( this.equals( c ) );
	}
	
	public int hashCode(){
		int result = 17;
		long f = Double.doubleToLongBits( r );
		result *= 37+( (int)(f^(f>>>32) ) );
		return result;
	}
	 

}
