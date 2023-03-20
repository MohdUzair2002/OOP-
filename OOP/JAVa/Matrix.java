
public interface Matrix {
    int getHeight();
    int getWidth();
    double getElem(int i, int j);
    void setElem(int i, int j, double value);
    Matrix add(Matrix other);
    Matrix multiply(Matrix other);
}



