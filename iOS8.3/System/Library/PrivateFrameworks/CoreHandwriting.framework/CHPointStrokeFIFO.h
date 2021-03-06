/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPointFIFO.h>

@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO {

	CHDrawing* _strokes;

}

@property (nonatomic,retain) CHDrawing * strokes;              //@synthesize strokes=_strokes - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)addPoint:(CGPoint)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(CHDrawing *)strokes;
-(void)setStrokes:(CHDrawing *)arg1 ;
@end

