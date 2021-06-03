public class Esame{

	private int voto, lode;
	private String esame;
	
	public Esame( String esame,int voto ){
		this.esame = esame;
		this.voto = voto;
	}
	
	public int impostaLode( int valore ){
		return lode = valore;
	}
	
	public String toString() {
		return "\" " + esame + " " + voto + " \"";	
	}
	
	public boolean equals( Esame altro ){
		return ( this.voto == altro.voto ) && ( this.lode == altro.lode ) && ( this.esame.equals( altro.esame ) );
		
	} 
	
	public boolean equals( Object altro ){
		if( this == altro ) return true;
		if( altro instanceof Esame ){ 
			Esame o = (Esame)altro;
			this.equals(o); 
		}
		return false;
	} 
	
	public int getVoto(){
		return voto;
	}
	
	public int getLode(){
		return lode;
	}
	
	public int hashCode(){
		int result = 17;
		result = 37*result*voto;
		result = 37*result*lode;
		result = 37*result*esame.hashCode();
		return result;
	}

}
