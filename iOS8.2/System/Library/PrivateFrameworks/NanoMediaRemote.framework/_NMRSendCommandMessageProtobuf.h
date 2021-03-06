/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMediaRemote/NSCopying.h>

@class _NMRCommandOptionsProtobuf;

@interface _NMRSendCommandMessageProtobuf : PBCodable <NSCopying> {

	double _timestamp;
	int _command;
	_NMRCommandOptionsProtobuf* _options;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) char hasCommand; 
@property (assign,nonatomic) int command;                                       //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) char hasOptions; 
@property (nonatomic,retain) _NMRCommandOptionsProtobuf * options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
-(int)command;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(_NMRCommandOptionsProtobuf *)arg1 ;
-(_NMRCommandOptionsProtobuf *)options;
-(char)hasTimestamp;
-(void)setCommand:(int)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasOptions;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCommand:(char)arg1 ;
-(char)hasCommand;
@end

