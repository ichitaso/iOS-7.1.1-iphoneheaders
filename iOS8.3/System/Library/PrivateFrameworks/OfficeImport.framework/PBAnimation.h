/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBAnimation : NSObject
+(char)hasPpt10Animations:(id)arg1 ;
+(void)parsePpt10Animation:(id)arg1 timings:(id)arg2 state:(id)arg3 ;
+(void)generatePpt10AnimationFromState:(id)arg1 timings:(id)arg2 ;
+(void)mapAnimationsFromSlide:(id)arg1 tgtSlide:(id)arg2 state:(id)arg3 ;
+(void)parseTimeNodeContainer:(id)arg1 siblings:(id)arg2 state:(id)arg3 ;
+(void)parseBuildList:(id)arg1 buildMap:(id)arg2 state:(id)arg3 ;
+(void)parseAnimateBehaviorContainer:(id)arg1 animBehavior:(id)arg2 timeNode:(id)arg3 ;
+(void)parseColorBehaviorContainer:(id)arg1 colorBehavior:(id)arg2 timeNode:(id)arg3 ;
+(void)parseEffectBehaviorContainer:(id)arg1 effectBehavior:(id)arg2 timeNode:(id)arg3 ;
+(void)parseMotionBehaviorContainer:(id)arg1 motionBehavior:(id)arg2 timeNode:(id)arg3 ;
+(void)parseRotationBehaviorContainer:(id)arg1 rotationBehavior:(id)arg2 timeNode:(id)arg3 ;
+(void)parseCmdBehaviorContainer:(id)arg1 cmdBehavior:(id)arg2 timeNode:(id)arg3 ;
+(void)parseTargetContainerHolder:(id)arg1 setTargetObj:(id)arg2 state:(id)arg3 ;
+(id)parseBehaviorContainer:(id)arg1 timeNode:(id)arg2 state:(id)arg3 ;
+(id)parseMediaContainer:(id)arg1 timeNode:(id)arg2 state:(id)arg3 ;
+(void)parseTimeNodeVariants:(id)arg1 commonData:(id)arg2 ;
+(void)parseTimeConditionsHolder:(id)arg1 commonData:(id)arg2 ;
+(id)newColorFromBehaviorColor:(PptAnimColorBehavior_Color_Struct*)arg1 ;
+(unsigned)paragraphIndexFromCharacterIndex:(unsigned)arg1 srcDrawable:(id)arg2 ;
+(id)newParaBuild:(id)arg1 ;
+(id)newChartBuild:(id)arg1 ;
@end

