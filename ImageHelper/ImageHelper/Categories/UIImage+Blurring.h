//
//  UIImage+Blurring.h
//  ImageHelper
//
//  Created by Majharul Huq on 06/21/2016.
//  Copyright (c) 2016 Majharul Huq. All rights reserved.
//


#import "MP_ImagesHelper.h"


@interface UIImage (NYX_Blurring)

-(UIImage*)gaussianBlurWithBias:(NSInteger)bias;

@end
