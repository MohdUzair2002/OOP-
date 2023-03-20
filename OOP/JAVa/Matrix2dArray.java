
public class Matrix2dArray implements Matrix {

    private double[][] data;

    public int getHeight(){
        return data.length;
    }

    public int getWidth(){
        return data[0].length;
    }

    public Matrix2dArray(int height, int width){
        data = new double[height][width];
    }
    
    public double getElem(int i, int j){
        return data[i][j];
    }

    public void setElem(int i, int j, double value){
        data[i][j] = value;
    }

    public Matrix add(Matrix other){
        int rows = data.length;
        int columns = data[0].length;
        Matrix2dArray result = new Matrix2dArray(rows, columns);
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                result.data[i][j] = data[i][j] + other.getElem(i, j);
            }
        }

        return result;
    }

    public Matrix multiply(Matrix other){
        int rows = data.length;
        int columns = data[0].length;
        Matrix2dArray result = new Matrix2dArray(rows, other.getWidth());

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < other.getWidth(); j++){
                result.data[i][j] = 0;
                for (int k = 0; k < columns; k++ ){
                    result.data[i][j] += data[i][k] * other.getElem(k, j);
                }
            }
        }

        return result;

    }

    @Override
    public String toString(){
        String output = "";
        for (int i = 0; i < data.length; i++){
            for (int j = 0; j < data[0].length; j++){
                output += data[i][j] + "\t";
            }
            output += "\n";
        }

        return output;
    }

    
}