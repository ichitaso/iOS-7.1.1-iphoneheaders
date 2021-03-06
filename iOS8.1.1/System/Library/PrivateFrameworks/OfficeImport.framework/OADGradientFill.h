/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class NSMutableArray, OADRelativeRect, OADShade;

@interface OADGradientFill : OADFill {

	NSMutableArray* mStops;
	BOOL mAreStopsOverridden;
	OADRelativeRect* mTileRect;
	BOOL mIsTileRectOverridden;
	int mFlipMode;
	BOOL mIsFlipModeOverridden;
	BOOL mRotateWithShape;
	BOOL mIsRotateWithShapeOverridden;
	OADShade* mShade;
	BOOL mIsShadeOverridden;

}
+(id)defaultProperties;
+(id)stringForTileFlipMode:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)stopCount;
-(id)stopColorAtIndex:(unsigned long long)arg1 ;
-(id)shade;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)addStopColor:(id)arg1 position:(float)arg2 ;
-(void)setFlipMode:(int)arg1 ;
-(void)setTileRect:(id)arg1 ;
-(void)setShade:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(id)initWithDefaults;
-(void)setStops:(id)arg1 ;
-(BOOL)areStopsOverridden;
-(id)stops;
-(BOOL)isTileRectOverridden;
-(BOOL)isFlipModeOverridden;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)isShadeOverridden;
-(void)clearStops;
-(float)stopPositionAtIndex:(unsigned long long)arg1 ;
-(void)sortStops;
-(id)tileRect;
-(int)flipMode;
-(BOOL)rotateWithShape;
-(void)setParent:(id)arg1 ;
@end

