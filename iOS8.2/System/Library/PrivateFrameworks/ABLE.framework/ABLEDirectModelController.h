/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>

@class ABLEBONDirect;

@interface ABLEDirectModelController : ABLEModelController {

	unsigned _currentBON;
	ABLEBONDirect* _directMap;

}

@property (readonly) unsigned currentBON;                    //@synthesize currentBON=_currentBON - In the implementation block
@property (readonly) ABLEBONDirect * directMap;              //@synthesize directMap=_directMap - In the implementation block
-(char)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(unsigned)currentBON;
-(void)updateConfiguration:(id)arg1 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(char)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(char)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(ABLEBONDirect *)directMap;
-(id)init;
-(id)currentState;
@end

