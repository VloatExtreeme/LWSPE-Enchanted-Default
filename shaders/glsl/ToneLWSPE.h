#include "lib/settings.h"
vec3 calclight(vec3 c,float strength){
	vec3 lcolor = mix(vec3(dot(vec3(7.,4.,0)*strength,vec3(0.8))),vec3(7.,4.,0)*strength,1.2);
	c += lcolor*pow(1.1*uv1.x,5.5);
return c;
}

//basically from uncharted Tonemap
vec3 RazzleMapping(vec3 x){
	vec3 A = vec3(1.83, 1.80, 1.80);
	vec3 B = vec3(0.30, 0.30, 0.30);
	vec3 C = vec3(0.35, 0.35, 0.35);
	vec3 D = vec3(0.52, 0.50, 0.50);
	vec3 E = vec3(0.20, 0.20, 0.20);
	vec3 F = vec3(0.32, 0.30, 0.30);
return ((x * (A * x + C * B) + D * E) / (x * (A * x + B) + D * F)) - E / F;
}