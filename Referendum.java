import java.util.*;

public class Referendum{

	public static void main( String [] args ){
	
		Scanner in = new Scanner( System.in );
		int [] voti = new int[ 12 ];
		int totNord = 0, totCentro = 0, totSud = 0;
		
		System.out.println("Nord:");
		for( int i = 0; i < 4; i++ ){
			voti[i] = in.nextInt();
			totNord += voti[i];
		}

		System.out.println("Centro:");
		for( int i = 4; i < 8; i++ ){
			voti[i] = in.nextInt();
			totCentro += voti[i];
		}
		System.out.println("Sud e Isole:");
		for( int i = 8; i < 12; i++ ){
			voti[i] = in.nextInt();
			totSud += voti[i];
		}
	
		System.out.println("Tabella delle percentuali per area geografica");
		
		int sìN = voti[0]*100/totNord;
		int noN = voti[1]*100/totNord;
		int biN = voti[2]*100/totNord;
		int nuN = voti[3]*100/totNord;
		
		int sìC = voti[4]*100/totCentro;
		int noC = voti[5]*100/totCentro;
		int biC = voti[6]*100/totCentro;
		int nuC = voti[7]*100/totCentro;
		
		int sìS = voti[8]*100/totSud;
		int noS = voti[9]*100/totSud;
		int biS = voti[10]*100/totSud;
		int nuS = voti[11]*100/totSud;
		
		System.out.println( "*NORD  * sì: " + sìN + " no: " + noN + " bianche: " + biN + " nulle: " + nuN);
		System.out.println( "*CENTRO* sì: " + sìC + " no: " + noC + " bianche: " + biC + " nulle: " + nuC);
		System.out.println( "*SUD-ISOLE* sì : " + sìS + " no: " + noS + " bianche: " + biS + " nulle: " + nuS);
		
		System.out.println("Tabella delle percentuali complessive");
		int totVoti = totNord + totCentro + totSud;

		System.out.println("Sì totali: " + ( (sìN+sìC+sìS)/3) );
		System.out.println("No totali: " + ( (noN+noC+noS)/3) );
		System.out.println("Bian totali: " + ( (biN+biC+biS)/3) );
		System.out.println("Null totali: " + ( (nuN+nuC+nuS)/3) );
		
		
	}

}
