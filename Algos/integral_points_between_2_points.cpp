ll getCount(pl p, pl q) 
{ 

    if (p.f==q.f) 
        return abs(p.s - q.s) - 1; 
  
    if (p.s == q.s) 
        return abs(p.f-q.f) - 1; 
  
    return gcd(abs(p.f-q.f), abs(p.s-q.s))-1; 
}