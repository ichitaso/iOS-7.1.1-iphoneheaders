/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject {

	NSString* _guid;
	NSTimer* _timer;
	void* _context;
	double _timeout;
	double _wifiTimeout;
	double _startTime;
	unsigned _flags;
	unsigned _options;
	/*^block*/ id _completionBlock;

}

@property (assign,nonatomic) void* context;              //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)cancel;
-(void)start;
-(void)_cancel;
-(id)initWithFlags:(unsigned)arg1 options:(unsigned)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_setTimer;
-(void)_timerHit:(id)arg1 ;
-(id)initWithFlags:(unsigned)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(/*^block*/ id)arg4 ;
@end

