float Q_rsqrt( float number ) // (1)
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F; // (2)

	x2 = number * 0.5F;							// (3)
	y  = number;
	i  = * ( long * ) &y;						// evil floating point bit level hacking
	i  = 0x5f3759df - ( i >> 1 );               // what the fuck?
	y  = * ( float * ) &i;
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
//	y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

	return y;
}