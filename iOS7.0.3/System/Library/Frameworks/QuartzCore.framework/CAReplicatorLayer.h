/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAReplicatorLayer : CALayer

@property (assign) int instanceCount; 
@property (assign) BOOL preservesDepth; 
@property (assign) double instanceDelay; 
@property (assign) CATransform3D instanceTransform; 
@property (assign) CGColorRef instanceColor; 
@property (assign) float instanceRedOffset; 
@property (assign) float instanceGreenOffset; 
@property (assign) float instanceBlueOffset; 
@property (assign) float instanceAlphaOffset; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)preservesDepth;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(int)instanceCount;
-(CATransform3D)instanceTransform;
-(double)instanceDelay;
-(CGColorRef)instanceColor;
-(float)instanceRedOffset;
-(float)instanceGreenOffset;
-(float)instanceBlueOffset;
-(float)instanceAlphaOffset;
-(void)setInstanceRedOffset:(float)arg1 ;
-(void)setInstanceGreenOffset:(float)arg1 ;
-(void)setInstanceBlueOffset:(float)arg1 ;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setInstanceCount:(int)arg1 ;
-(void)setInstanceTransform:(CATransform3D)arg1 ;
-(void)setInstanceAlphaOffset:(float)arg1 ;
-(void)setInstanceColor:(CGColorRef)arg1 ;
-(void)setInstanceDelay:(double)arg1 ;
@end

