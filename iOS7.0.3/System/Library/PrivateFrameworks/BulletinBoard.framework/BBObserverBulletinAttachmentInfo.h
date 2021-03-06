/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <BulletinBoard/BulletinBoard-Structs.h>
@class NSMutableDictionary;

@interface BBObserverBulletinAttachmentInfo : NSObject {

	NSMutableDictionary* _imageSizePairs;
	BOOL imagesFetched;
	BOOL sizesFetched;

}

@property (assign,nonatomic) BOOL imagesFetched; 
@property (assign,nonatomic) BOOL sizesFetched; 
-(void)dealloc;
-(id)init;
-(CGSize)sizeForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)setImagesFetched:(BOOL)arg1 ;
-(void)setSizesFetched:(BOOL)arg1 ;
-(BOOL)imagesFetched;
-(BOOL)sizesFetched;
-(id)_pairForKey:(id)arg1 create:(BOOL)arg2 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
@end

