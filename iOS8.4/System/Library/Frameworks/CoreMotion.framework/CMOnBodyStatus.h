/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMOnBodyStatus : CMLogItem {

	int fResult;
	int fConfidence;

}

@property (nonatomic,readonly) long long result; 
@property (nonatomic,readonly) long long confidence; 
+(BOOL)supportsSecureCoding;
-(id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)result;
-(long long)confidence;
@end

