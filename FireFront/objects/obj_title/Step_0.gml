/// @DnDAction : YoYo Games.Instances.Sprite_Image_Alpha
/// @DnDVersion : 1
/// @DnDHash : 0EF2D699
/// @DnDArgument : "alpha" "0.05"
/// @DnDArgument : "alpha_relative" "1"
image_alpha += 0.05;

/// @DnDAction : YoYo Games.Common.If_Variable
/// @DnDVersion : 1
/// @DnDHash : 3EAF2D34
/// @DnDArgument : "var" "image_alpha"
/// @DnDArgument : "op" "2"
/// @DnDArgument : "value" "1"
if(image_alpha > 1)
{
	/// @DnDAction : YoYo Games.Instances.Sprite_Image_Alpha
	/// @DnDVersion : 1
	/// @DnDHash : 7EFBC2BE
	/// @DnDParent : 3EAF2D34
	/// @DnDArgument : "alpha" "0"
	image_alpha = 0;
}