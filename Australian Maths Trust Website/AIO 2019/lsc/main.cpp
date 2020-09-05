#include <bits/stdc++.h>
#include <cstdio>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using namespace __gnu_pbds;

//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

int main(void) {
        /*
     * N is the number of shops. shop_pos contains their positions, in increasing
     * order.
     */
    int N;

    /*
     * M is the number of houses. house_pos contains their positions, in increasing
     * order.
     */
    int M;

    /*
     * pamphlets contains the numbers on the pamphlets, in non-decreasing order.
     * These may not necessarily be in the same order as the houses.
     */

    /* L is the length of the street. */
    int L;

    int answer;

    /* Open the input and output files. */
    FILE *input_file = fopen("lscin.txt", "r");
    FILE *output_file = fopen("lscout.txt", "w");

    /* Read the value of N, M and L. */
    fscanf(input_file, "%d%d%d", &N, &M, &L);

     int shop_pos[N];
    /* Read the positions of the shops. */
    for (int i = 0; i < N; i++) {
        fscanf(input_file, "%d", &shop_pos[i]);
    }

    int house_pos[M];
    /* Read the positions of the houses. */
    for (int i = 0; i < M; i++) {
        fscanf(input_file, "%d", &house_pos[i]);
    }

     int pamphlets[M];

    /* Read the numbers on the pamphlets. */
    for (int i = 0; i < M; i++) {
        fscanf(input_file, "%d", &pamphlets[i]);
    }

    bool process =true;
    int wd = 1;
    int genpamph[M];
    while(process){

        for(int i=0; i < M; i++){ // loop through each house
            //calculate num stores in range for each hosue
            int num = 0;

            for(int j=house_pos[i] - wd; j < house_pos[i] + wd + 1; j++){
                bool loop = true;
                int k = 0;
                while(loop){
                    if(shop_pos[k] == j){
                        num++;
                        loop = false;
                    }
                    else if(shop_pos[k] > j || k>=N){
                       loop = false;
                    }
                    k++;
                }

            }
            genpamph[i] = num;
        }

        //Sort smallest to largest
        sort(&genpamph[0], &genpamph[M]);

        //Check if equal
        bool matches = true;
        for(int j=0; j<M; j++){
            if(genpamph[j] != pamphlets[j]){
                matches = false;

                if(genpamph[j] > pamphlets[j]){
                    answer = -1;
                    process = false;
                }
                break;
            }
        }

        if(matches){
            answer = wd;
            process = false;
        }else{
            wd++;
        }

    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
