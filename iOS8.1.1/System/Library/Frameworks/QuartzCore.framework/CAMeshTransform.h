/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCoding.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/NSMutableCopying.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {

	void* _impl;
	unsigned long long _normalization;
	long long _subdivisionSteps;

}

@property (readonly) unsigned long long vertexCount; 
@property (readonly) unsigned long long faceCount; 
@property (copy,readonly) NSString * depthNormalization; 
@property (readonly) int subdivisionSteps; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)_data;
-(Object*)CA_copyRenderValue;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)meshTransformForLayer:(id)arg1 ;
-(id)initWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(id)_initWithMeshTransform:(id)arg1 ;
-(NSString *)depthNormalization;
-(BOOL)_constructWithData:(id)arg1 ;
-(unsigned long long)faceCount;
-(CAMeshFace)faceAtIndex:(unsigned long long)arg1 ;
-(int)subdivisionSteps;
-(id)_subdivideToDepth:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(CAMeshVertex)vertexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
@end

