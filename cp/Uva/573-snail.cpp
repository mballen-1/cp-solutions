

void calc(float h, float u, float d, float f){
       float cur = 0, curu = u; 
       int day = 0;
       float less = f * u / 100;
       while(cur >= 0 && cur < h){
            if(day == 0){
                if(curu > 0)
                    cur += curu;
                if(cur >h)
                    break;
                else
                    cur -= d;    
                ++day;

            }
            else {   
                curu -= less;
                if(curu > 0)
                    cur += curu;
                if(cur >h)
                    break;
                else
                    cur -= d;                
                ++day;
            }
       }

       if(cur >= h){
           cout<<"success on day "<<++day<<"\n";
       } 
       else{
           cout<<"failure on day "<<day<<"\n";
       }

}


string lol;
int main(){
    float h , u , d , f, count = 0;

    while(!cin.eof()){
        cin>>h>>u>>d>>f;
        if (h > 0){
            calc(h, u, d, f);
        }
        else
            return 0;
    }
    //return 0;
}