void getTime(int &h,int  &m){
   cout<<"Input hour & min:";
   cin>> h>>m;
  
}

int subtract(int h1,int m1,int h2,int m2){
  //return hour
  int h=h2-h1;
     if(m2<m1) h--;
      if(h<0) h+=24;
  return h;
  
}
int subtract(int m1,int m2){
  //return min
  if(m2<m1) return m2+60-m1;
  else return m2-m1;
}