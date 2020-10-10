//Snake & Ladder Game
//4 Players with one turn each
//Just a demo game to demonstrate 2D Array

import java.util.*;

class SnakeLadder {
public static void main(String args[]) {

    int B[][]={{0,1,0},{0,0,2},{0,1,0}};
    int d,i,j,k,temp;
    int P[]=new int[4];
    

    Random r = new Random();

    System.out.println("Snake and Ladder");
    System.out.println("Scores");

    for(k=0;k<4;k++) {
        d = r.nextInt(6)+1;
        if(d>=1 && d<=3) {
            i=0;
            j=d-1;
        }
        else {
            i=1;
            j=(d-3)-1;
        }

        if(i==0 && j==1) {
            P[k]=d-5;
        }
        else if(i==1 && j==2) {
            P[k]=d+4;
        }
        else if(i==2 && j==1) {
            P[k]=d-1;
        }
        else {
            P[k]=d;
        }
    }
    for(k=0;k<4;k++) {
        System.out.println("Player "+(k+1)+" : "+P[k]);
    }
    System.out.println("Results: ");
    Arrays.sort(P); 
    for(k = 0; k<2; k++) {
        temp = P[k];
        P[k] = P[4 - 1 - k];
        P[4 - 1 - k] = temp;
    }
    
    for(k=0;k<4;k++) {
        System.out.println("Rank "+(k+1)+" : "+P[k]);
    }
}
}
