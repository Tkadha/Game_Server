#pragma once

#pragma pack (push,1)
struct keydown_packet {
	short size;
	char type;
	int key;
};
struct pos_packet {
	short size;
	char type;
	int x, y;
};
#pragma pack (pop)
