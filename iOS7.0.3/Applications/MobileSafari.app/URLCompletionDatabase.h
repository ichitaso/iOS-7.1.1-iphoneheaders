/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSURLCompletionDatabase.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface URLCompletionDatabase : WBSURLCompletionDatabase {

	NSObject<OS_dispatch_group>* _cloudTabFetching;
	int _searchableCollectionsMask;

}

@property (assign,nonatomic) int searchableCollectionsMask;              //@synthesize searchableCollectionsMask=_searchableCollectionsMask - In the implementation block
-(id)_bookmarkCollection;
-(id)initWithSearchableCollectionsMask:(int)arg1 ;
-(int)searchableCollectionsMask;
-(void)setSearchableCollectionsMask:(int)arg1 ;
-(void)dealloc;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
@end

