#include "Stack.h"

void Stack::Link::Initialize(void* dat, Link* nxt) {
	data = dat;
	next = nxt;
}

void Stack::initialize() {
head = 0;
}
