if(p_water == false&& p_cfe == false)
{
	with(other)
	{
		//拾取之后指变true
		instance_destroy();
	}
	p_speed = p_speed - 1;
	p_ffe = true;
	instance_create_layer(1767,512,layer,obj_c_ffe);
}