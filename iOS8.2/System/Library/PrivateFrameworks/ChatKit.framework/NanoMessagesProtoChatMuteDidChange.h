/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/companionmessagesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionmessagesd/companionmessagesd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <companionmessagesd/NSCopying.h>

@class NSString;

@interface NanoMessagesProtoChatMuteDidChange : PBCodable <NSCopying> {

	double _unmuteTime;
	NSString* _chatGUID;
	SCD_Struct_Na1 _has;

}

@property (nonatomic,readonly) char hasChatGUID; 
@property (nonatomic,retain) NSString * chatGUID;              //@synthesize chatGUID=_chatGUID - In the implementation block
@property (assign,nonatomic) char hasUnmuteTime; 
@property (assign,nonatomic) double unmuteTime;                //@synthesize unmuteTime=_unmuteTime - In the implementation block
-(char)hasChatGUID;
-(void)setUnmuteTime:(double)arg1 ;
-(void)setHasUnmuteTime:(char)arg1 ;
-(char)hasUnmuteTime;
-(double)unmuteTime;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)chatGUID;
-(void)setChatGUID:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

