//
//  UIImage+Enhancing.m
//  ImageHelper
//
//  Created by Majharul Huq on 06/21/2016.
//  Copyright (c) 2016 Majharul Huq. All rights reserved.
//


#import "UIImage+Enhancing.h"
#import <CoreImage/CoreImage.h>


@implementation UIImage (NYX_Enhancing)

-(UIImage*)autoEnhance
{
	/// No Core Image, return original image
	if (![CIImage class])
		return self;

	CIImage* ciImage = [[CIImage alloc] initWithCGImage:self.CGImage];

	NSArray* adjustments = [ciImage autoAdjustmentFiltersWithOptions:[NSDictionary dictionaryWithObject:[NSNumber numberWithBool:NO] forKey:kCIImageAutoAdjustRedEye]];

	for (CIFilter* filter in adjustments)
	{
		[filter setValue:ciImage forKey:kCIInputImageKey];
		ciImage = filter.outputImage;
	}

	CIContext* ctx = [CIContext contextWithOptions:nil];
	CGImageRef cgImage = [ctx createCGImage:ciImage fromRect:[ciImage extent]];
	UIImage* final = [UIImage imageWithCGImage:cgImage];
	CGImageRelease(cgImage);
	return final;
}

-(UIImage*)redEyeCorrection
{
	/// No Core Image, return original image
	if (![CIImage class])
		return self;

	CIImage* ciImage = [[CIImage alloc] initWithCGImage:self.CGImage];

	/// Get the filters and apply them to the image
	NSArray* filters = [ciImage autoAdjustmentFiltersWithOptions:[NSDictionary dictionaryWithObject:[NSNumber numberWithBool:NO] forKey:kCIImageAutoAdjustEnhance]];
	for (CIFilter* filter in filters)
	{
		[filter setValue:ciImage forKey:kCIInputImageKey];
		ciImage = filter.outputImage;
	}

	/// Create the corrected image
	CIContext* ctx = [CIContext contextWithOptions:nil];
	CGImageRef cgImage = [ctx createCGImage:ciImage fromRect:[ciImage extent]];
	UIImage* final = [UIImage imageWithCGImage:cgImage];
	CGImageRelease(cgImage);
	return final;
}

@end
