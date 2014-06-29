/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {

	WebHistoryItemPrivate* _private;

}
+(id)entryWithURL:(id)arg1 ;
+(void)initialize;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(float)_scale;
-(id)target;
-(id)URL;
-(bool)_scaleIsInitial;
-(id)_viewportArguments;
-(bool)lastVisitWasFailure;
-(void)_setScrollPoint:(CGPoint)arg1 ;
-(void)_setScale:(float)arg1 isInitial:(bool)arg2 ;
-(void)_setViewportArguments:(id)arg1 ;
-(CGPoint)_scrollPoint;
-(id)dictionaryRepresentation;
-(id)children;
-(id)dictionaryRepresentationIncludingChildren:(bool)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 ;
-(id)_sharedLinkUniqueIdentifier;
-(bool)isTargetItem;
-(int)visitCount;
-(id)RSSFeedReferrer;
-(void)setRSSFeedReferrer:(id)arg1 ;
-(void)setAlwaysAttemptToUsePageCache:(bool)arg1 ;
-(void)_setLastVisitedTimeInterval:(double)arg1 ;
-(id)_lastVisitedDate;
-(id)targetItem;
-(id)_transientPropertyForKey:(id)arg1 ;
-(void)_setTransientProperty:(id)arg1 forKey:(id)arg2 ;
-(void)_setLastVisitWasFailure:(bool)arg1 ;
-(bool)_lastVisitWasHTTPNonGet;
-(id)_redirectURLs;
-(unsigned long long)_getDailyVisitCounts:(const int*)arg1 ;
-(unsigned long long)_getWeeklyVisitCounts:(const int*)arg1 ;
-(unsigned)_bookmarkID;
-(void)_setBookmarkID:(unsigned)arg1 ;
-(void)_setSharedLinkUniqueIdentifier:(id)arg1 ;
-(bool)_isInPageCache;
-(bool)_hasCachedPageExpired;
-(void)setViewState:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(CGPoint)scrollPoint;
-(void)_visitedWithTitle:(id)arg1 increaseVisitCount:(bool)arg2 ;
-(void)_recordInitialVisit;
-(void)_mergeAutoCompleteHints:(id)arg1 ;
-(id)initWithWebCoreHistoryItem:(PassRefPtr<WebCore::HistoryItem>*)arg1 ;
-(id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4 ;
-(id)initWithURL:(id)arg1 target:(id)arg2 parent:(id)arg3 title:(id)arg4 ;
-(void)setVisitCount:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)title;
-(id)URLString;
-(void)finalize;
-(id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3 ;
-(void)setAlternateTitle:(id)arg1 ;
-(id)originalURLString;
-(double)lastVisitedTimeInterval;
-(id)alternateTitle;
@end
