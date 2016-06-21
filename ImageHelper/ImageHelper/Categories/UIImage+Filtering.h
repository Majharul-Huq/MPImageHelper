//
//  UIImage+Filters.h
//  ImageHelper
//
//  Created by Majharul Huq on 06/21/2016.
//  Copyright (c) 2016 Majharul Huq. All rights reserved.
//


#import "MP_ImagesHelper.h"


@interface UIImage (NYX_Filtering)

-(UIImage*)brightenWithValue:(float)factor;

-(UIImage*)contrastAdjustmentWithValue:(float)value;

-(UIImage*)edgeDetectionWithBias:(NSInteger)bias;

-(UIImage*)embossWithBias:(NSInteger)bias;

-(UIImage*)gammaCorrectionWithValue:(float)value;

-(UIImage*)grayscale;

-(UIImage*)invert;

-(UIImage*)opacity:(float)value;

-(UIImage*)sepia;

-(UIImage*)sharpenWithBias:(NSInteger)bias;

-(UIImage*)unsharpenWithBias:(NSInteger)bias;

@end
