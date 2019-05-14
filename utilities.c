//returns a 7seg code based on the number (hex)
const char seg7_codes[] = 
	{0b00111111, 
	 0b00000110, 
	 0b01011011, 
	 0b01001111, 
	 0b01100110, 
	 0b01101101, 
	 0b01111101, 
	 0b00000111, 
	 0b01111111, 
	 0b01100111, 
	 0b01110111, 
	 0b01111100,
	 0b00111001,
	 0b01011110, 
	 0b01111001,  
	 0b01110001}; //array with all the codes
	 
const char error_code = 0b01000000;

short int num_to_seg7_hex(unsigned int num){
	//make sure that the number does not exceed 0xFF
	if(num > 0xFF) return error_code | (error_code << 8);
	
	//extract the digits from the num given
	int first_hexdigit = num & 0xF;
	int second_hexdigit = num >> 4;
	
	//append the seg 7 codes for the hex digits
	int to_return = seg7_codes[first_hexdigit] | (seg7_codes[second_hexdigit] << 8);
	
	return to_return;
}

short int num_to_seg7_dec(unsigned int num){
	//make sure that the number does not exceed 99
	if(num > 99) return error_code | (error_code << 8);
	
	//extract the digits from the num given
	int first_hexdigit = num % 10;
	int second_hexdigit = num / 10;
	
	//append the seg 7 codes for the hex digits
	int to_return = seg7_codes[first_hexdigit] | (seg7_codes[second_hexdigit] << 8);
	
	return to_return;
}