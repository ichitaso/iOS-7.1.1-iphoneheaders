/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject {

	CGImageRef _imageRef;
	NSData* _data;
	NSString* _name;
	CGSize _size;
	float _scale;
	char _usedAsTextureAndImage;
	Texture2D* _gglTexture;
	VKResourceManager* _resourceManager;

}
-(void)dealloc;
-(CGSize)size;
-(float)scale;
-(id)initWithData:(id)arg1 scale:(float)arg2 ;
-(CGImageRef)image;
-(Texture2D*)gglTexture;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 usedAsTextureAndImage:(char)arg3 ;
-(id)initWithData:(id)arg1 scale:(float)arg2 usedAsTextureAndImage:(char)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 ;
-(id)initWithName:(id)arg1 scale:(float)arg2 resourceManager:(id)arg3 ;
@end

