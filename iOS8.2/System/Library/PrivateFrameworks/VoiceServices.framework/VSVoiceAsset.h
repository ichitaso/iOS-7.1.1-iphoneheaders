/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/NSSecureCoding.h>

@class NSString, NSArray, NSNumber;

@interface VSVoiceAsset : NSObject <NSSecureCoding> {

	char _isInstalled;
	char _isBuiltInVoice;
	NSString* _name;
	NSArray* _languages;
	int _gender;
	int _footprint;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * languages;                     //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) int gender;                              //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) int footprint;                           //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) char isInstalled;                        //@synthesize isInstalled=_isInstalled - In the implementation block
@property (assign,nonatomic) char isBuiltInVoice;                       //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (nonatomic,readonly) NSNumber * contentVersion;               //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSString * masteredVersion;              //@synthesize masteredVersion=_masteredVersion - In the implementation block
+(char)supportsSecureCoding;
-(int)gender;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(NSArray *)languages;
-(int)footprint;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(int)arg3 footprint:(int)arg4 contentVersion:(id)arg5 masteredVersion:(id)arg6 isInstalled:(char)arg7 ;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(int)arg3 footprint:(int)arg4 isInstalled:(char)arg5 ;
-(char)isBuiltInVoice;
-(void)setIsBuiltInVoice:(char)arg1 ;
-(NSNumber *)contentVersion;
-(NSString *)masteredVersion;
-(char)isInstalled;
@end

