/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APGraphLayer : CALayer {

	float* _Values;
	float* _Mins;
	float* _Maxes;
	int* _StartIndex;
	int* _NumValues;
	int _NumGraphs;
	CGPoint* _Lines;
	int _MaxLength;
	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;

}
+(CGColorRef)copyGraphColorWithIndex:(int)arg1 ;
-(void)setUpGraphs:(int)arg1 ;
-(void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4 ;
-(void)updateValue:(int)arg1 value:(float)arg2 ;
-(void)dealloc;
-(id)init;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

