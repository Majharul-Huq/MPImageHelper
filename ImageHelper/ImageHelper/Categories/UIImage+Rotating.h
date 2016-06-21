//
//  UIImage+Rotation.h
//  ImageHelper
//
//  Created by Majharul Huq on 06/21/2016.
//  Copyright (c) 2016 Majharul Huq. All rights reserved.
//


#import "MP_ImagesHelper.h"


@interface UIImage (NYX_Rotating)

-(UIImage*)rotateInRadians:(float)radians;

-(UIImage*)rotateInDegrees:(float)degrees;

-(UIImage*)rotateImagePixelsInRadians:(float)radians;

-(UIImage*)rotateImagePixelsInDegrees:(float)degrees;

-(UIImage*)verticalFlip;

-(UIImage*)horizontalFlip;

@end
