#include <iostream>
#include <cstring>
#include <iostream>

using namespace std;
#define M 100;
char sa[1000];
char sb[1000];

typedef struct _Node {
	int s[M];
	int l; // 字符串长度
	int c; // 次幂
} Node, *pNode;

void cp (pNode src, pNode des, int st, int l) {
	int i, j;
	for(i=st, j= 0; i<st+l; j++, i++) {
		des->s[j] = src->s[i];
	}
	des->l = l;
	des->c = st + src->c; // 次幂
}

void add(pNode pa, pNode, pb, pNode ans) {
	int i, cc, k, palen, pblen, len;
	int ta, tb;
	pNode temp;
	// a的次幂要大于b的次幂
	if (pa->c < pb->c) {
		temp = pa;
		pa = pb;
		pb = pa;
	}

	ans->c = pb->c;
	cc = 0;
	palen = pa->l + pa->c;
	pblen = pb->l + pb->c;
	if (palen > pblen)
		len = palen;
	else
		len = pblen;

	// 次幂的差
	k = pa->c - pb->c;
	for (int i=0; i < len-ans->c; i++) {
		if (i < k) 
			ta = 0;
		else
			ta = pa->s[i-k];
		if (i < pb->l) 
			tb = pb->s[i];
		else
			tb = 0;
		if (i>pa->l+k) 
			ta = 0;
		ans->s[i] = (ta+tb+tc)%10;
		cc = (ta+tb+tc)/10;
	}
	if (cc) 
		ans->s[i++] = cc;
	ans->l = i;
}


void mul(pNode pa, pNode pb, pNode ans) {
	int i, cc, w;
	int ma = pa->l >> 1, mb = pb->l>>1;
	Node t1, t2, t3, t4, z;
	pNode temp;
	if (!ma || !mb) {
		if (!ma) {
			temp = pa;
			pa = pb;
			pb = temp;
		}
		ans->c = pa->c + pb->c;
		w = pb->s[0];
		cc = 0;
		for (int i = 0; i < pa->l; i++) {
			ans->s[i] = (w*pa->s[i] + cc)%10;
			cc = (w*pa->s[i]+cc)/10;
		}
		if (cc) {
			ans->s[i++] = cc;
		}
		ans->l = i;
		return;
	}
	// 分治的核心
	cp(pa, &ah, ma, pa->l-ma);
	cp(pa, &al, 0, ma);
	cp(pb, &bh, mb, pb->l-mb);
	cp(pb, &bl, 0, mb);

	mul(&ah, &bh, &t1);
	mul(&ah, &bl, &t2);
	mul(&al, &bh, &t3);
	mul(&al, &bl, &t4);

	add(&t3, &t4, ans);
	add(&t2, ans, &z);
	add(&t1, &z, ans);
}

int main() {
}
