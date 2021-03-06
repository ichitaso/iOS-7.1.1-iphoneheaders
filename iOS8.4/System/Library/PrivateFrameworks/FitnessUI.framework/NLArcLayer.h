/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface NLArcLayer : CAShapeLayer {

	BOOL _needsRegeneration;
	double _arcStart;
	double _radius;
	CGPoint _center;

}

@property (assign,nonatomic) double radius;               //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGPoint center;              //@synthesize center=_center - In the implementation block
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)layoutSublayers;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)_regeneratePath;
-(void)animatePathCenter:(CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4 ;
-(void)setNeedsRegeneration;
@end

