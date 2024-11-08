#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    rep(i,n) cin >> k[i];
    ll ans = 1e10;

    if (n == 2) {
        cout << max(k[0],k[1]) << endl;
        return 0;
    }
    if (n == 3) {
        rep(a,2) rep(b,2) rep(c,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 4) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 5) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 6) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 7) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 8) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 9) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 10) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 11) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 12) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 13) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];           
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 14) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) rep(n,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];
            if (n == 0) aa += k[13];
            else bb += k[13];               
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 15) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) rep(n,2) rep(o,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];
            if (n == 0) aa += k[13];
            else bb += k[13]; 
            if (o == 0) aa += k[14];
            else bb += k[14];               
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 16) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) rep(n,2) rep(o,2) rep(p,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];
            if (n == 0) aa += k[13];
            else bb += k[13]; 
            if (o == 0) aa += k[14];
            else bb += k[14];      
            if (p == 0) aa += k[15];
            else bb += k[15];            
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 17) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) rep(n,2) rep(o,2) rep(p,2) rep(q,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];
            if (n == 0) aa += k[13];
            else bb += k[13]; 
            if (o == 0) aa += k[14];
            else bb += k[14];      
            if (p == 0) aa += k[15];
            else bb += k[15];   
            if (q == 0) aa += k[16];
            else bb += k[16];           
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 18) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) rep(n,2) rep(o,2) rep(p,2) rep(q,2) rep(r,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];
            if (n == 0) aa += k[13];
            else bb += k[13]; 
            if (o == 0) aa += k[14];
            else bb += k[14];      
            if (p == 0) aa += k[15];
            else bb += k[15];   
            if (q == 0) aa += k[16];
            else bb += k[16];     
            if (r == 0) aa += k[17];
            else bb += k[17];         
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 19) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) rep(n,2) rep(o,2) rep(p,2) rep(q,2) rep(r,2) rep(s,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];
            if (n == 0) aa += k[13];
            else bb += k[13]; 
            if (o == 0) aa += k[14];
            else bb += k[14];      
            if (p == 0) aa += k[15];
            else bb += k[15];   
            if (q == 0) aa += k[16];
            else bb += k[16];     
            if (r == 0) aa += k[17];
            else bb += k[17];  
            if (s == 0) aa += k[18];
            else bb += k[18];         
            ans = min(ans,max(aa,bb));
        }
    }

    if (n == 20) {
        rep(a,2) rep(b,2) rep(c,2) rep(d,2) rep(e,2) rep(f,2) rep(g,2) rep(h,2) rep(i,2) rep(j,2) rep(z,2) rep(l,2) rep(m,2) rep(n,2) rep(o,2) rep(p,2) rep(q,2) rep(r,2) rep(s,2) rep(t,2) {
            ll aa = 0, bb = 0;
            if (a == 0) aa += k[0];
            else bb += k[0];
            if (b == 0) aa += k[1];
            else bb += k[1];
            if (c == 0) aa += k[2];
            else bb += k[2];
            if (d == 0) aa += k[3];
            else bb += k[3];
            if (e == 0) aa += k[4];
            else bb += k[4];
            if (f == 0) aa += k[5];
            else bb += k[5];
            if (g == 0) aa += k[6];
            else bb += k[6];
            if (h == 0) aa += k[7];
            else bb += k[7];
            if (i == 0) aa += k[8];
            else bb += k[8];
            if (j == 0) aa += k[9];
            else bb += k[9];
            if (z == 0) aa += k[10];
            else bb += k[10];
            if (l == 0) aa += k[11];
            else bb += k[11];
            if (m == 0) aa += k[12];
            else bb += k[12];
            if (n == 0) aa += k[13];
            else bb += k[13]; 
            if (o == 0) aa += k[14];
            else bb += k[14];      
            if (p == 0) aa += k[15];
            else bb += k[15];   
            if (q == 0) aa += k[16];
            else bb += k[16];     
            if (r == 0) aa += k[17];
            else bb += k[17];  
            if (s == 0) aa += k[18];
            else bb += k[18];     
            if (t == 0) aa += k[19];
            else bb += k[19];      
            ans = min(ans,max(aa,bb));
        }
    }

    cout << ans << endl;
return 0;
}