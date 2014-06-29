/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNContentAwareTransitionAnimator.h>
#import <iWorkImport/KNContentAwareFrameAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper;

@interface KNContentAwareCube : KNAnimationEffect <KNContentAwareTransitionAnimator, KNContentAwareFrameAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* _parameterGroup;
	KNMotionBlurAnimationPluginWrapper* _motionBlurWrapper;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(bool)isCharacterAwareEffect;
+(bool)requiresBullets;
+(bool)requiresMagicMoveTextures;
+(bool)requiresPerspectiveTransform;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
@end
