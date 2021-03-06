/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:41:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyDevice/NSSecureCoding.h>

@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding> {

	char _lostModeEnabled;
	NSString* _message;
	NSString* _phoneNumber;

}

@property (assign,nonatomic) char lostModeEnabled;                //@synthesize lostModeEnabled=_lostModeEnabled - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(char)lostModeEnabled;
-(void)setLostModeEnabled:(char)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

