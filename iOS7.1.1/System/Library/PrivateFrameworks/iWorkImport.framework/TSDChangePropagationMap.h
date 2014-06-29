/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDChangePropagationMap.h>

@protocol TSDChangePropagationMap <NSObject>
@required
-(id)prototypeChangeForPrototype:(id)arg1;
@end


@class TSUNoCopyDictionary, NSMutableSet;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap> {

	TSUNoCopyDictionary* mDictionary;
	NSMutableSet* mClassesOfChangedPrototypes;

}
-(id)prototypeChangeForPrototype:(id)arg1 ;
-(bool)hasAnyChangesForPrototypesOfClasses:(id)arg1 ;
-(id)prototypePassingTest:(/*^block*/ id)arg1 ;
-(void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2 ;
-(void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2 ;
-(void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4 ;
-(void)p_addClassesForPrototype:(id)arg1 ;
-(void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 ;
-(void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end
