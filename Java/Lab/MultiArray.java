public class MultiArray {
    public static void main(String[] args) {
        // Note that a matrix has rows and columns. First index
// is for rows and second index for columns.
double[][] distance; //declare matrix distance
distance[0][0] = 295; //assign 295 to position [0,0]
int[][] grades = new int[10][10]; //declare & create
for (int i = 0; i < grades.length; i++) //rows
for (int j = 0; j < grades[i].length; j++) //columns
grades[i][j] = (int)(Math.random() * 100);
for (int i = 0; i < 10; i++) //process rows
{ for (int j = 0; j < 10; j++) //process columns
System.out.print (" " + grades[i][j]);
System.out.println();
}

    }
}
