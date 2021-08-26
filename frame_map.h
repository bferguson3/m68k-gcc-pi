const u16 frame_map[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 1, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0x801, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 0x804, 0, 9, 10, 0, 11, 12, 0, 0, 
	0, 0, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0x804, 
	13, 14, 15, 16, 17, 18, 0, 0, 0, 0, 0x1001, 0x1007, 0x1008, 0x1008, 0x1008, 0x1008, 
	0x1008, 19, 20, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 
	0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1008, 0x1801, 21, 22, 23, 24, 25, 26, 27, 0, 
	0, 0, 0, 0, 28, 29, 30, 31, 0, 32, 33, 34, 0, 35, 36, 37, 
	0, 0, 0, 0, 0, 0, 38, 39, 40, 41, 0, 0, 42, 43, 44, 45, 
	46, 47, 48, 49, 0, 0, 0, 0, 0, 0, 0, 50, 51, 52, 53, 54, 
	0, 0, 55, 56, 0, 57, 58, 59, 60, 0, 0, 0, 0, 61, 62, 63, 
	64, 65, 66, 0, 67, 68, 69, 70, 71, 72, 73, 74, 0, 0, 75, 0x1819, 
	0, 0, 0, 0, 76, 77, 78, 0x1034, 45, 0, 79, 80, 0, 81, 0x1823, 82, 
	83, 84, 0, 0, 0, 85, 24, 86, 87, 0x1023, 88, 0, 89, 90, 91, 92, 
	0x1811, 93, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 97, 98, 
	0x1038, 0, 25, 99, 0, 100, 101, 102, 0x1828, 0x1823, 0, 0, 0, 76, 103, 0, 
	0, 0, 0, 0, 104, 105, 0, 106, 107, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 108, 109, 110, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	
};
