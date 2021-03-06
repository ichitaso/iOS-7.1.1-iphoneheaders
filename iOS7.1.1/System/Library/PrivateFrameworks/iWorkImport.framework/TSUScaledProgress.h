/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUProgress.h>

@protocol OS_dispatch_queue;
@class TSUScaledProgressStorage, TSUProgress, NSObject;

@interface TSUScaledProgress : TSUProgress {

	TSUScaledProgressStorage* mStorage;
	TSUProgress* mProgress;
	id mProgressObserver;
	NSObject<OS_dispatch_queue>* mProgressQueue;

}

@property (retain) TSUProgress * progress; 
@property (assign) double maxValue; 
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
-(void)dealloc;
-(id)init;
-(double)value;
-(void)setProgress:(id)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(id)progress;
-(bool)isIndeterminate;
-(double)maxValue;
-(void)removeProgressObserver:(id)arg1 ;
@end

