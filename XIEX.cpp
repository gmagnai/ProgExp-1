double XIEX(double x,double y) {
    while(x!=y){
        if(x>y) x=x-y;
        else y=y-x;                        
    }
    return x;
}