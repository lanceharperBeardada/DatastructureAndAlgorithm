// 稀疏矩阵与二维数组进行互转

public class DemoSparseMatrix {

  public static void traverseMatrix(int[][] matrix) {
    if (matrix.length == 0) {
      return;
    }
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        System.out.print(matrix[i][j] + " ");
      }
      System.out.println();
    }
  }

  public static int[][] conversionMatrix(int[][] matrix) {
    int count = 1;
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        if (matrix[i][j] != 0) {
          count++;
        }
      }
    }

    int[][] sparseMatrix = new int[3][count];
    sparseMatrix[0][0] = matrix.length;
    sparseMatrix[0][1] = matrix[0].length;
    sparseMatrix[0][2] = count;
    int index = 1;
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[0].length; j++) {
        if (matrix[i][j] != 0) {
          sparseMatrix[index][0] = i;
          sparseMatrix[index][1] = j;
          sparseMatrix[index][2] = matrix[i][j];
          index++;
        }
      }
    }
    return sparseMatrix;
  }

  public static int[][] restoreMatrix(int[][] matrix) {
    int[][] result = new int[matrix[0][0]][matrix[0][1]];
    for (int i = 1; i < matrix.length; i++) {
      result[matrix[i][0]][matrix[i][1]] = matrix[i][2];
    }

    return result;
  }

  public static void main(String[] args) {
    final int row = 11;
    final int col = 11;
    int[][] matrix = new int[row][col];
    matrix[1][2] = 1;
    matrix[2][3] = 2;
    traverseMatrix(matrix);
    int[][] newMatrix = conversionMatrix(matrix);
    traverseMatrix(newMatrix);
    int[][] restoredMatrix = restoreMatrix(newMatrix);
    traverseMatrix(restoredMatrix);
  }
}
