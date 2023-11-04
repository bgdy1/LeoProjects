if(p_ffe == false&& p_cfe == false)
{
	with(other)
	{
		//拾取之后指变true
		instance_destroy();
	}
	p_speed = p_speed - 1;
	p_water = true;
	instance_create_layer(1760,398,layer,obj_c_wfe);
	if(instance_exists(obj_arrow))
	{
		obj_arrow.a_wfe=true;
	}
}