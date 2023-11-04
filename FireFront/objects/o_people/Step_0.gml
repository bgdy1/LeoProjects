//Moving System

if(keyboard_check(vk_right)&&keyboard_check(vk_up))
{ 
	image_angle = point_direction(x,y,x+10,y+10);
	TwoButtonPressed = true;
}
if(keyboard_check(vk_right)&&keyboard_check(vk_down))
{ 
	image_angle = point_direction(x,y,x-10,y+10);
	TwoButtonPressed = true;
}
if(keyboard_check(vk_left)&&keyboard_check(vk_up))
{ 
	image_angle = point_direction(x,y,x+10,y-10);
	TwoButtonPressed = true;
}
if(keyboard_check(vk_left)&&keyboard_check(vk_down))
{ 
	image_angle = point_direction(x,y,x-10,y-10);
	TwoButtonPressed = true;
}

if(keyboard_check(vk_right))
{ 
	if(!TwoButtonPressed)
	{
		image_angle = point_direction(x,y,x,y+10);
	}
	x = x + p_speed;
}
if(keyboard_check(vk_left))
{	if(!TwoButtonPressed)
	{
		image_angle = point_direction(x,y,x,y-10);
	}
	x = x - p_speed;
}
if(keyboard_check(vk_up))
{
	if(!TwoButtonPressed)
	{
		image_angle = point_direction(x,y,x+10,y);
	}
	y = y - p_speed;
}

if(keyboard_check(vk_down))
{	
	if(!TwoButtonPressed)
	{
		image_angle = point_direction(x,y,x-10,y);
	}
	y = y + p_speed;
}

TwoButtonPressed = false;

if(mouse_check_button(mb_left))//发射
{
	if(p_cfe==true)//如果拿了p_cfe
	{
		if(p_cfe_bullets>0)
		{
			instance_create_layer(x,y+10,layer,obj_co2);//生成co2
			if(instance_exists(obj_co2))
			{
				obj_co2.image_angle = image_angle;
				obj_co2.co2_destroy = true;
				p_cfe_bullets = p_cfe_bullets-1;
			}
		}
	}
	else if(p_water==true)
	{
		if(p_water_bullets>0)//如果拿了水
		{
			instance_create_layer(x,y+10,layer,obj_water);//生成water
			if(instance_exists(obj_water))
			{
				obj_water.image_angle = image_angle;
				obj_water.destroy_water = true;
				p_water_bullets = p_water_bullets-1;
			}
		}
	}
	else if(p_ffe==true)
	{
		if(p_foam_bullets>0)//如果拿了foam
		{
			instance_create_layer(x,y+10,layer,obj_foam);//生成foam
			if(instance_exists(obj_foam))
			{
				obj_foam.image_angle = image_angle
				obj_foam.destroy_foam = true;
				p_foam_bullets = p_foam_bullets-1;
			}
		}
	}
}

if(p_cfe==true)
{
	if(p_cfe_bullets <= 0)//如果co2用完
	{
		if(instance_exists(obj_c_cfe))
		{
			p_cfe = false;
			obj_c_cfe.c_cfe_destroy = true;
			p_speed = p_speed + 1;
		}
	}
}

if(p_water==true)
{
	if(p_water_bullets <= 0)//如果水用完
	{
		if(instance_exists(obj_c_wfe))
		{
			p_water = false;
			obj_c_wfe.c_wfe_destroy = true;
			p_speed = p_speed + 1;
		}
	}
}

if(secondroom = false)
{
	if(instance_exists(obj_fire))//如果co2火灭了 就去room4
	{
		if(obj_fire.f_health <= 0)
		{
			room_goto(Clear_room);
		}
		else if((obj_fire.f_health>0) && (p_water_bullets <=0))//如果用水把火没灭 就去room5
		{
			timer_for_end = timer_for_end -5;//延迟去room5
			if(timer_for_end<=0)
			{
				room_goto(Gameover_room);
			}
		}
	}
}
else if (secondroom = true)//如果到第二间房间
{
	if(instance_exists(obj_ofire))
	{
		if(obj_ofire.f_ohealth<=0)
		{
			room_goto(Clear_room2);
		}
	}
}
if(secondroom==false){
	if(p_health<=0)
	{
		room_goto(Gameover_room);
	}
}
else if (secondroom==true){
	if(p_health<=0)
	{
		room_goto(Gameover_room_2);
	}
}