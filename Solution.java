public class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
            int rowSize=image.length;
            int colSize=image[0].length;

            for (int i = 0; i < rowSize; i++) {
                for (int j = 0; j < colSize; j++) {
                    if(image[i][j]==0)
                        image[i][j]=1;
                    else
                        image[i][j]=0;
                }
            }

            int[][] result=new int[rowSize][colSize];

            for (int i = 0; i < rowSize; i++) {
                int col=0;
                for (int j = colSize-1; j >= 0; j--) {
                    result[i][col]=image[i][j];
                    col++;
                }
            }

            return result;
    }

    public static void main(String[]args){

		flipAndInvertImage(int [10] [20]);
}


}