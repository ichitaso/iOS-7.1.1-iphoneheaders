/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned endTime;
	unsigned capacity;
	unsigned bytesPerFrame;

}
-(void)dealloc;
-(id)init;
-(id)initWithCapacity:(unsigned)arg1 bytesPerFrame:(unsigned)arg2 ;
-(void)increaseCapacity:(unsigned)arg1 ;
-(bool)store:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
-(int)needsNewNumSamples:(unsigned)arg1 timestamp:(unsigned)arg2 ;
-(int)fetch:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
@end
