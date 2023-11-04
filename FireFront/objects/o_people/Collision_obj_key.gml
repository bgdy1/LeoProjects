with(other)
{
  instance_destroy();
}
if(instance_exists(obj_door3))
{
	obj_door3.mark_result += 1;
}

p_speed = p_speed - 0.2;
instance_create_layer(1837,680,layer,obj_c_key);