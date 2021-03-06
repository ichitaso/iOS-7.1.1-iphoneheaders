/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSURL, NSString, NSDate, NSSet, CLLocation, NSNumber;

@interface PLSyncSaveJob : NSObject {

	BOOL isVideo;
	BOOL isSyncComplete;
	BOOL _cleanupSyncState;
	NSArray* facesInfo;
	NSURL* originalAssetURL;
	NSString* uuid;
	NSDate* creationDate;
	NSDate* modificationDate;
	NSSet* albumURIs;
	CLLocation* location;
	NSNumber* sortToken;
	NSString* originalFileName;
	NSDate* _cleanupBeforeDate;
	/*^block*/id _finishedBlock;

}

@property (nonatomic,retain) NSURL * originalAssetURL; 
@property (assign,nonatomic) BOOL isVideo; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSSet * albumURIs; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,retain) NSArray * facesInfo; 
@property (nonatomic,retain) NSNumber * sortToken; 
@property (nonatomic,retain) NSString * originalFileName; 
@property (assign,nonatomic) BOOL isSyncComplete; 
@property (assign,nonatomic) BOOL cleanupSyncState;                    //@synthesize cleanupSyncState=_cleanupSyncState - In the implementation block
@property (nonatomic,copy) NSDate * cleanupBeforeDate;                 //@synthesize cleanupBeforeDate=_cleanupBeforeDate - In the implementation block
@property (nonatomic,copy) id finishedBlock;                           //@synthesize finishedBlock=_finishedBlock - In the implementation block
-(void)dealloc;
-(id)description;
-(NSDate *)modificationDate;
-(CLLocation *)location;
-(NSString *)uuid;
-(BOOL)isVideo;
-(NSDate *)creationDate;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setSortToken:(NSNumber *)arg1 ;
-(BOOL)cleanupSyncState;
-(NSDate *)cleanupBeforeDate;
-(BOOL)isSyncComplete;
-(NSURL *)originalAssetURL;
-(NSNumber *)sortToken;
-(NSString *)originalFileName;
-(void)processFacesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)facesInfo;
-(NSSet *)albumURIs;
-(id)initFromSerializedData:(id)arg1 ;
-(id)serializedData;
-(void)setOriginalAssetURL:(NSURL *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setAlbumURIs:(NSSet *)arg1 ;
-(void)setFacesInfo:(NSArray *)arg1 ;
-(void)setOriginalFileName:(NSString *)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setIsSyncComplete:(BOOL)arg1 ;
-(void)setCleanupSyncState:(BOOL)arg1 ;
-(void)setCleanupBeforeDate:(NSDate *)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
@end

