/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {

	NSMutableSet* _comps;

}

@property (nonatomic,retain) NSMutableSet * comps;              //@synthesize comps=_comps - In the implementation block
@property (nonatomic,readonly) NSSet * compNames; 
-(void)dealloc;
-(id)init;
-(id)description;
-(NSSet *)compNames;
-(void)addComp:(id)arg1 ;
-(void)setComps:(NSMutableSet *)arg1 ;
-(NSMutableSet *)comps;
-(id)copyParseRules;
-(id)childrenToWrite;
-(id)componentsAsString;
@end

