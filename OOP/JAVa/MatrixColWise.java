public class MatrixColWise extends MatrixLin {

    public MatrixColWise(int height, int width){
        this.height = height;
        this.width = width;
        data = new double[height * width];
    }

    public double getElem(int i, int j){
        return data[i + height * j];
    }

    public void setElem(int i, int j, double value){
        data[i + height * j] = value;
    }

    public Matrix add(Matrix other){
        
        MatrixColWise result = new MatrixColWise(height, width);

        for (int i = 0; i < height; i++){
            for (int j = 0; j < width; j++){
                result.data[i + height * j] = data[i + height * j] + other.getElem(i, j);
            }
        }
        return result;
    }

    public Matrix multiply(Matrix other){

        int nRows = height;
        int nCols = other.getWidth();
        MatrixColWise result = new MatrixColWise(height, other.getWidth());

        for (int i = 0; i < nRows; i++){
            for (int j = 0; j < nCols; j++){
                result.data[i + nRows * j] = 0;
                for (int k = 0; k < width; k++ ){
                    result.data[i + nRows * j] += data[i + height * k] * other.getElem(k, j);
                }
            }
        }

        return result;

    }

    public Matrix2dArray delinearize(){
        Matrix2dArray matrix2d = new Matrix2dArray(height, width);
        int index = 0;
        for (int j = 0; j < width; j++){
            for (int i = 0; i < height; i++){
                matrix2d.setElem(i, j, data[index]);
                index++;
            }
        }
        return matrix2d;
    }

    @Override
    public String toString(){
        String output = "";
        for (int i = 0; i < data.length; i++){ 
            output += data[i] + "\t";   
        }
        return output;
    }
}
