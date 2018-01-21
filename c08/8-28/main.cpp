class bird {
	public:
		void fly();
};

class rock {
};


int main(){
	rock r1;
	void* p1 = &r1;
	bird* b1 = (bird*)p1;
	b1->fly();
}
