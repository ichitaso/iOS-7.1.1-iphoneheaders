/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@interface OITSUCGImage : OITSUImage {

	CGImageRef mCGImage;
	int mOrientation;
	float mScale;

}
-(void)dealloc;
-(CGSize)size;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

