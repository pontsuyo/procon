#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

template<class V, class Merge> struct SegmentTree {
        const int n;
        const V unit_value;
        vector<V> val;

        SegmentTree(int _n) : n(1 << (32-__builtin_clz(_n-1))), unit_value(Merge::unit()), val(n * 2, unit_value) {}

        V get(int i) const { return val[i + n]; }
        void set(int i, const V &v) { val[i + n] = v; }

        void build() {
                for (int i = n - 1; i > 0; i--) val[i] = Merge::merge(val[i << 1], val[i << 1 | 1]);
        }

        void update(int i, const V &v) {
                for (val[i += n] = v; i >>= 1;) {
                        val[i] = Merge::merge(val[i << 1], val[i << 1 | 1]);
                }
        }

        // [l, r)
        V query(int l, int r) const {
                l = max(0, min(n, l)) + n;
                r = max(0, min(n, r)) + n;
                V ret1 = unit_value, ret2 = unit_value;
                for (; l < r; l >>= 1, r >>= 1) {
                        if (l & 1) ret1 = Merge::merge(ret1, val[l++]);
                        if (r & 1) ret2 = Merge::merge(val[--r], ret2);
                }
                return Merge::merge(ret1, ret2);
        }
};
template<class V, class Merge> ostream& operator<<(ostream& os, const SegmentTree<V, Merge>& seg) {
        vector<V> vec;
        for (int i = 0; i < seg.n; i++) {
                vec.emplace_back(seg.get(i));
        }
        os << vec;
        return os;
}

// sniplate: SegTreeMax
template <class V> struct MergeRangeMaxQ {
        static V merge(const V &l, const V &r) { return l > r ? l : r; }
        static V unit() { return numeric_limits<V>::min(); }
};
template<class V> using SegTreeMax = SegmentTree<V, MergeRangeMaxQ<V>>;


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    rep(iii, t){
        int n, m, q;
        cin >> n >> m >> q;
        // vector<int> M(m);
        
        vector<P> lr;
        rep(j, n){
            int l, r;
            cin >> l >> r;
            lr.push_back(P(l, r+1));
        }

        sort(lr.begin(), lr.end());

        // for (int i = 0; i < lr.size(); i++)
        // {
        //     cout << lr[i].first << " " << lr[i].second << endl;
        // }
        

        vector<P> v;

        int idx = 1;
        rep(j, n){
            int w = lr[j].first - idx;
            if(w!=0){
                v.push_back(P(w, lr[j].first));
            }
            idx = lr[j].second;
        }
        if(m+1-idx!=0) v.push_back(P(m+1-idx, m+1));


        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
        

        SegTreeMax <int> seg(m+10);

        for (int i = 0; i < v.size(); i++) {
            int w = v[i].first;
            int r = v[i].second;
            int cur = seg.get(w);
            if(cur < r){
                seg.set(w, r);
            }
        }
        seg.build();

        // rep(i, m){
        //     cout << i << ":" << seg.get(i) << endl;
        // }
        // cout << seg << endl;
        
        rep(j, q){
            int k;
            cin >> k;
            int r = seg.query(k, m+1);
            // cout << k << " " << r << " " << m << endl;
            if(r<0){
                cout << -1 << " " << -1 << "\n"; 
            }else{
                cout << r-k << " " << r-1 << "\n";
            }
        }
    }
    return 0;
}