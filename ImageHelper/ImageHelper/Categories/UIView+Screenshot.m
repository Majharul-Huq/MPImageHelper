//
//  UIView+Screenshot.m
//  ImageHelper
//
//  Created by Majharul Huq on 06/21/2016.
//  Copyright (c) 2016 Majharul Huq. All rights reserved.
//


#import "UIView+Screenshot.h"
#import <QuartzCore/QuartzCore.h>

@implementation UIView (NYX_Screenshot)

-(UIImage*)imageByRenderingView
{
	UIGraphicsBeginImageContextWithOptions(self.bounds.size, self.opaque, 0.0f);
	[self.layer renderInContext:UIGraphicsGetCurrentContext()];
	UIImage* image = UIGraphicsGetImageFromCurrentImageContext();
	UIGraphicsEndImageContext();
	return image;
}

@end
