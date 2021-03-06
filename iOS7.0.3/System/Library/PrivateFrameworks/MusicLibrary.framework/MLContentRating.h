/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLContentRating : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (nonatomic,retain) NSNumber * ratingRank; 
@property (nonatomic,copy) NSString * ratingSystem; 
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(id)copyStringRepresentation;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithContentRatingDictionary:(id)arg1 ;
-(id)ratingSystem;
-(id)ratingLabel;
-(id)ratingRank;
-(id)ratingDescription;
-(void)setRatingDescription:(id)arg1 ;
-(void)setRatingLabel:(id)arg1 ;
-(void)setRatingRank:(id)arg1 ;
-(void)setRatingSystem:(id)arg1 ;
-(void).cxx_destruct;
@end

