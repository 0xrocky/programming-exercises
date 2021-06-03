public abstract class Figura{

	public Figura(){
	}
	
	public abstract double area();
	
	public abstract double perimetro();
	
	public boolean haAreaMagg( Figura altra ){
		return( this.area() > altra.area() );
	}
	public boolean haPerimetroMagg( Figura altra ){
		return( this.perimetro() > altra.perimetro() );
	}
}
