if(p_water == false&& p_cfe == false&& p_ffe == false)
{
with(other)
{
	//拾取之后指变true
	instance_destroy();
}
p_speed = p_speed - 1;
p_cfe = true;
instance_create_layer(1770,635,layer,obj_c_cfe);
}