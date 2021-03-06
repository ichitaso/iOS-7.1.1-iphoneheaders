/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>
#import <iWorkImport/TSDCanvasSelection.h>

@protocol TSDCanvasSelection <NSObject>
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) TSDDrawableInfo<TSDContainerInfo> * container; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned unlockedInfoCount; 
@required
+(id)emptySelection;
-(unsigned)infoCount;
-(id)infos;
-(BOOL)containsKindOfClass:(Class)arg1;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1;
-(id)infosOfClass:(Class)arg1;
-(id)copyIncludingInfo:(id)arg1;
-(id)copyExcludingInfo:(id)arg1;
-(id)unlockedInfos;
-(unsigned)unlockedInfoCount;
-(BOOL)isEmpty;
-(id)container;
@end

#import <CoreFoundation/NSCopying.h>

@protocol TSDContainerInfo;
@class NSSet, TSDDrawableInfo;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying> {

	NSSet* mInfos;
	TSDDrawableInfo<TSDContainerInfo>* mContainer;

}

@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) TSDDrawableInfo<TSDContainerInfo> * container; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned unlockedInfoCount; 
+(Class)archivedSelectionClass;
+(id)emptySelection;
-(void)saveToArchive:(CanvasSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const CanvasSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(unsigned)infoCount;
-(id)infos;
-(BOOL)containsKindOfClass:(Class)arg1 ;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1 ;
-(id)infosOfClass:(Class)arg1 ;
-(id)copyIncludingInfo:(id)arg1 ;
-(id)copyExcludingInfo:(id)arg1 ;
-(id)unlockedInfos;
-(unsigned)unlockedInfoCount;
-(id)initWithInfos:(id)arg1 andContainer:(id)arg2 ;
-(id)initWithInfos:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isEmpty;
-(id)container;
@end

