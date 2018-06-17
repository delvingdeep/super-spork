
#include<iostream>
#include<vector>

using namespace std;

//function prototyping
vector< vector<int> > twodsum(vector< vector<int> > vect1, vector< vector<int> > vect2);

int main(){

    //define row vectors
    vector<int> row_one(3,1); //preloaded with '1'
    vector<int> row_two(3,2); //preloaded with '2'
    vector<int> row_sum(3);

    //declare 2d vectors
    vector< vector<int> > matrix_one(5,row_one);
    vector< vector<int> > matrix_two(5,row_two);

    //declare 2d sum vector
    vector< vector<int> > matrix_sum(5,row_sum);

    //call 2d sum function
    matrix_sum = twodsum(matrix_one, matrix_two);

    for(int i=0; i<matrix_sum.size(); i++){
        for(int j=0; j<matrix_sum[0].size(); j++){
            cout << matrix_sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* Function takes in two matrices and sums it up give out same dimension matrix */
vector< vector<int> > twodsum(vector< vector<int> > vect1, vector< vector<int> > vect2){

    vector<int> sum_row (3);

    vector< vector<int> > vector_sum(5,sum_row);

    for(int i=0; i<vector_sum.size(); i++){
        for(int j=0; j<vector_sum[0].size(); j++){
            vector_sum[i][j] = vect1[i][j] + vect2[i][j];
        }
    }

    return vector_sum;

}
