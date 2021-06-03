import java.util.*;

public class Studente extends Persona implements Iterable< Studente >{

	private int matricola;
	private Set< Esame > libretto = new HashSet< Esame >() ;
	
	public Studente( String nome, String cognome, int matricola ){
		super( nome, cognome );
		this.matricola = matricola;	
	}
	
	public String toString(){
		return super.toString() + matricola;	
	}
	
	public void registra( Esame x ){
		libretto.add( x );	
	
	}
	
	public Iterator< Studente > iterator(){
		Iterator< Esame > it = libretto.iterator();
	}
	
	public double media(){
		double somma = 0;
		Iterator< Esame > it = iterator();
		while ( it.hasNext() ){
			Esame corrente = it.next();
			somma += ( corrente.getVoto() ) + ( corrente.getLode() );
		}
		somma = somma / ( libretto.size() + 0.0 );
		return somma;
	}
		                      
}
