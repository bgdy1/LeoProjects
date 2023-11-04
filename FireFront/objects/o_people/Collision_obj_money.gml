p_speed = p_speed - 5;
p_money = p_money + 1;
with(other)
{
	instance_destroy();
}
instance_create_layer(1836,798,layer,obj_c_money);