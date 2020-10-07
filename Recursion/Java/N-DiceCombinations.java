//Problem Statement : To print all possible combinations we can get by rollin N -Dice
/*In such problems we made a decision at each step.
We make a choice,we explore all the posibilities using that choice that and then we print the undo button i.e we remove that chosen choice.
Explore (decisons)
--If there is no decision to make stop
else
Handle one desicion ourselves and let recursion handle other case
---for each available choice for this decison :
1: Choose C
2: Explore the choice that could follow C
3:Remove C (Backtrack!)
 */
public class DiceRoll {

    public static void DiceHelper(int dice, int sol[], int k) {
        if (k == dice) { //base case to print the value of the dice combination
            for (int i = 0; i < k; i++) {
                System.out.print(sol[i] + " ");
            }
            System.out.println();
        } else {
            //some dice left to roll
            //handle one die and let recursion handle the other
            //for each value that a die could have 
            //choose
            //explore
            //unchoose
            for (int i = 1; i <= 6; i++) {
                sol[k] = i; //chosen
                DiceHelper(dice, sol, k + 1); //explore
                //backtrak:As we are using an array. We dont need remove the last added element. The index would itself take care of it.
            }
        }
         
    public static void Dice(int n) {
        int sol[] = new int[n];
        DiceHelper(n, sol, 0);
    }

    public static void main(String x[]) {
        int n = 3;
        Dice(n);
    }
}
