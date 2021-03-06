/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VGLProgram.h>

@interface VGLShieldProgram : VGLProgram {

	int _uTextureSampler;
	int _textureSampler;
	int _uFadeTime;
	float _fadeTime;

}

@property (assign,nonatomic) int textureSampler; 
@property (assign,nonatomic) float fadeTime; 
+(id)vertName;
+(id)fragName;
-(void)setup;
-(void)setTextureSampler:(int)arg1 ;
-(int)textureSampler;
-(void)setFadeTime:(float)arg1 ;
-(float)fadeTime;
@end

