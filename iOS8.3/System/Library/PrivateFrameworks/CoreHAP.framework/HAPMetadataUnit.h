/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface HAPMetadataUnit : NSObject {

	NSString* _name;
	NSString* _unitDescription;
	NSString* _localizationKey;

}

@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * unitDescription;              //@synthesize unitDescription=_unitDescription - In the implementation block
@property (nonatomic,retain) NSString * localizationKey;              //@synthesize localizationKey=_localizationKey - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(void)dump;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizationKey;
-(id)initWithName:(id)arg1 description:(id)arg2 localizationKey:(id)arg3 ;
-(NSString *)unitDescription;
-(id)generateDictionary;
-(void)setUnitDescription:(NSString *)arg1 ;
-(void)setLocalizationKey:(NSString *)arg1 ;
@end

