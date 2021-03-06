/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:56:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/NSFastEnumeration.h>

@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {

	BWRingBuffer* _ringBuffer;
	double _maxDuration;
	int _maxCount;

}
-(unsigned)countByEnumeratingWithState:(SCD_Struct_BW29*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(double)duration;
-(id)initWithMaxDuration:(double)arg1 ;
-(void)addMotionDataToRingBuffer:(SCD_Struct_BW31*)arg1 withSampleCount:(int)arg2 ;
-(SCD_Struct_BW31*)lastSample;
@end

