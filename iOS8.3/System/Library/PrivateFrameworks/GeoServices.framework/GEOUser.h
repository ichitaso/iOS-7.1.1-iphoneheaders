/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPhoto, NSString;

@interface GEOUser : PBCodable <NSCopying> {

	GEOPhoto* _image;
	NSString* _name;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,retain) GEOPhoto * image;              //@synthesize image=_image - In the implementation block
-(void)dealloc;
-(void)setImage:(GEOPhoto *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPhoto *)image;
-(id)dictionaryRepresentation;
-(char)hasImage;
-(id)initWithPlaceDataUser:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end

