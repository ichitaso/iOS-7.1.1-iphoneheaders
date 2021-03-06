/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:20:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/NSCoding.h>

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding> {

	int _invalidationIgnoreCount;
	int _numberOfIgnoredInvalidations;
	int _entityType;

}

@property (nonatomic,readonly) int entityType;                                     //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) char usesSections; 
@property (nonatomic,readonly) char showsIndexBar; 
@property (nonatomic,readonly) unsigned numberOfSections; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) char showsEntityCountFooter; 
@property (nonatomic,readonly) NSString * entityCountFormat; 
-(id)initWithEntityType:(int)arg1 ;
-(int)entityType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(unsigned)numberOfSections;
-(void)invalidate;
-(char)isEmpty;
-(void)_willInvalidate;
-(unsigned)_globalIndexForIndexPath:(id)arg1 ;
-(unsigned)indexOfSectionForSectionTitleAtIndex:(unsigned)arg1 ;
-(void)deleteEntityAtIndexPath:(id)arg1 ;
-(id)entityAtIndexPath:(id)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned)arg1 ;
-(char)canSelectEntityAtIndex:(unsigned)arg1 ;
-(char)canEditEntityAtIndexPath:(id)arg1 ;
-(int)editingTypeForEntityAtIndexPath:(id)arg1 ;
-(id)sectionEntityAtIndex:(unsigned)arg1 ;
-(id)sectionEntities;
-(NSArray *)localizedSectionIndexTitles;
-(char)isIgnoringInvalidation;
-(NSString *)entityCountFormat;
-(char)showsEntityCountFooter;
-(char)showsIndexBar;
-(unsigned)indexOfEntity:(id)arg1 ;
-(char)canEditEntityAtIndex:(unsigned)arg1 ;
-(void)deleteEntityAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfSectionEntity:(id)arg1 ;
-(id)anyEntity;
-(char)usesSections;
-(void)preloadEntities;
-(void)preloadSectionEntities;
-(id)localizedSectionTitleAtIndex:(unsigned)arg1 ;
-(id)entities;
-(void)_invalidateCalculatedEntities;
-(int)editingTypeForEntityAtIndex:(unsigned)arg1 ;
-(char)entityIsNowPlayingAtIndex:(unsigned)arg1 ;
-(id)playbackContextForIndex:(unsigned)arg1 ;
-(void)beginIgnoringInvalidation;
-(void)endIgnoringInvalidation;
-(void)_didInvalidate;
-(id)entityAtIndex:(unsigned)arg1 ;
@end

