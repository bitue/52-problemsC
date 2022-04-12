#include <stdio.h>

void main (){

    int T ;
    scanf("%d", &T);

    for(int i =0 ; i<T; i++){
        int run, run_target , balls ;
        double curr_run_rate , req_run_rate ;


        scanf("%d %d %d", run_target, run, balls);
        run_target ++ ;
        int ball_remain = 300 - balls ;
        req_run_rate = 6*((run_target - run ) / ball_remain ) ;
        req_run_rate = 6*()


    }

}
