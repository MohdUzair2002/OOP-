
public abstract class MatrixLin implements Matrix {

    protected double[] data;
    protected int height;
    protected int width;

    public abstract Matrix2dArray delinearize();

    public int getHeight(){
        return height;
    }

    public int getWidth(){
        return width;
    }

    protected int min(int a, int b){
        if (data[a] >= data[b]) return a;
        return b;
    }
    
}
