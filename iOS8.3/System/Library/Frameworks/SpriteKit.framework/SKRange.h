/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:16:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/NSCoding.h>
#import <SpriteKit/NSCopying.h>

@interface SKRange : NSObject <NSCoding, NSCopying> {

	float _lowerLimit;
	float _upperLimit;

}

@property (assign) float lowerLimit;              //@synthesize lowerLimit=_lowerLimit - In the implementation block
@property (assign) float upperLimit;              //@synthesize upperLimit=_upperLimit - In the implementation block
+(id)rangeWithLowerLimit:(float)arg1 upperLimit:(float)arg2 ;
+(id)rangeWithNoLimits;
+(id)rangeWithLowerLimit:(float)arg1 ;
+(id)rangeWithUpperLimit:(float)arg1 ;
+(id)rangeWithConstantValue:(float)arg1 ;
+(id)rangeWithValue:(float)arg1 variance:(float)arg2 ;
-(float)lowerLimit;
-(float)upperLimit;
-(void)setLowerLimit:(float)arg1 ;
-(void)setUpperLimit:(float)arg1 ;
-(id)initWithLowerLimit:(float)arg1 upperLimit:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

