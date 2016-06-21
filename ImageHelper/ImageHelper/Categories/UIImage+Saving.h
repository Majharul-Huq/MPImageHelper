//
//  UIImage+Saving.h
//  ImageHelper
//
//  Created by Majharul Huq on 06/21/2016.
//  Copyright (c) 2016 Majharul Huq. All rights reserved.
//


#import "MP_ImagesHelper.h"


typedef enum
{
	NYXImageTypePNG,
	NYXImageTypeJPEG,
	NYXImageTypeGIF,
	NYXImageTypeBMP,
	NYXImageTypeTIFF
} NYXImageType;


@interface UIImage (NYX_Saving)

-(BOOL)saveToURL:(NSURL*)url uti:(CFStringRef)uti backgroundFillColor:(UIColor*)fillColor;

-(BOOL)saveToURL:(NSURL*)url type:(NYXImageType)type backgroundFillColor:(UIColor*)fillColor;

-(BOOL)saveToURL:(NSURL*)url;

-(BOOL)saveToPath:(NSString*)path uti:(CFStringRef)uti backgroundFillColor:(UIColor*)fillColor;

-(BOOL)saveToPath:(NSString*)path type:(NYXImageType)type backgroundFillColor:(UIColor*)fillColor;

-(BOOL)saveToPath:(NSString*)path;

-(BOOL)saveToPhotosAlbum;

+(NSString*)extensionForUTI:(CFStringRef)uti;

@end
