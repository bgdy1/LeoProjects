p_speed = p_speed - 0.25;
with(other)
{
	instance_destroy();
}
if(instance_exists(obj_door3))
{
	obj_door3.mark_result += 1;
}
instance_create_layer(1812,389,layer,obj_c_phone);