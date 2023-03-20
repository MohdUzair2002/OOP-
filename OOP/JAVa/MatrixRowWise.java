public class MatrixRowWise extends MatrixLin {

    public MatrixRowWise(int height, int width){
        this.height = height;
        this.width = width;
        data = new double[height * width];
    }

    public double getElem(int i, int j){
        return data[i * width + j];
    }

    public void setElem(int i, int j, double value){
        data[i * width + j] = value;
    }

    public Matrix add(Matrix other){
        
        MatrixRowWise result = new MatrixRowWise(height, width);

        for (int i = 0; i < height; i++){
            for (int j = 0; j < width; j++){
                result.data[i * width + j] = data[i * width + j] + other.getElem(i, j);
            }
        }

        return result;
    }

    public Matrix multiply(Matrix other){
        int nRows = height;
        int nCols = other.getWidth();
        MatrixRowWise result = new MatrixRowWise(nRows, nCols);

        for (int i = 0; i < nRows; i++){
            for (int j = 0; j < nCols; j++){
                result.data[i * nCols + j] = 0;
                for (int k = 0; k < width; k++ ){
                    result.data[i * nCols + j] += data[i * width + k] * other.getElem(k, j);
                }
            }
        }

        return result;

    }

    public Matrix2dArray delinearize(){
        Matrix2dArray matrix2d = new Matrix2dArray(height, width);
        int index = 0;
        for (int i = 0; i < height; i++){
            for (int j = 0; j < width; j++){
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
