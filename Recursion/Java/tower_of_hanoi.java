import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class TowerOfHanoi {
	public static void main(String[] args) throws IOException {
		
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        //BufferedReader for taking user input
        int numOfDiscs = Integer.parseInt(reader.readLine());
        //variable numOfDiscs represents the number of disc(s) to be moved
        towerOfHanoi(numOfDiscs, 'A', 'B', 'C');
	}
	
    static void towerOfHanoi(int num, char source, char aux, char dest)
    //num represents the number of disc(s) to be moved
    //source is the source tower at which disc(s) is/are present initially
    //aux is the auxiliary tower used while moving disc(s) from source tower to the dest tower
    //dest is the destination tower where all the disc(s) is/are to be moved
	{
        //Base Case i.e. when (num == 1)
		if(num == 1)
		{
			System.out.println("Move 1 from "+ source+" to "+dest);
			return;
		}
        
        //Recursive Case
		towerOfHanoi((num-1), source, dest, aux);
		System.out.println("Move "+num+" from "+source+" to "+dest);
		towerOfHanoi((num-1), aux, source, dest);
	}

}