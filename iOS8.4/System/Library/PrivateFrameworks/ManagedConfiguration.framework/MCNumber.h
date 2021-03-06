/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/NSSecureCoding.h>

@class NSNumber;

@interface MCNumber : NSObject <NSSecureCoding> {

	NSNumber* _number;

}

@property (nonatomic,retain) NSNumber * number;              //@synthesize number=_number - In the implementation block
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithInteger:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInt:(int)arg1 ;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
-(void)setNumber:(NSNumber *)arg1 ;
-(NSNumber *)number;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
@end

