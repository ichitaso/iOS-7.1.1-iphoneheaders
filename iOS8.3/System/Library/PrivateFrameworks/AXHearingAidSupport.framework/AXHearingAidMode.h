/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:26:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/NSSecureCoding.h>

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding> {

	unsigned char _index;
	char _isSelected;
	NSString* _name;
	int _category;
	int _ear;
	int syncAttempts;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int category;                     //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned char index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) char isSelected;                  //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) int ear;                          //@synthesize ear=_ear - In the implementation block
@property (assign,nonatomic) int syncAttempts; 
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(int)arg1 ;
-(int)category;
-(char)isSelected;
-(unsigned char)index;
-(void)setIndex:(unsigned char)arg1 ;
-(void)setIsSelected:(char)arg1 ;
-(void)setEar:(int)arg1 ;
-(id)initWithRepresentation:(id)arg1 ;
-(id)transportRepresentation;
-(int)ear;
-(int)syncAttempts;
-(void)setSyncAttempts:(int)arg1 ;
-(char)isStream;
@end

