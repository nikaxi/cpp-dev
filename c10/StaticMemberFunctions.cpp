class X{
	int i;
	static int j;
	public:
	X(int ii = 0):i(ii){
		j = i;
	}

	int val() const {
		return i;
	}
	
	static int incr() {
		return ++j;
	}

	static int f() {
		return incr();
	}
};

int X::j = 0;

int  main() {
	X x;
	X* xp = &x;
	x.f();
	xp->f();
	X::f();
}


