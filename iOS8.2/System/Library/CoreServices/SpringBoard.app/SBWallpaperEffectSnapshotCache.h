/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWallpaperObserver.h>

@class NSMutableSet, NSString;

@interface SBWallpaperEffectSnapshotCache : NSObject <SBWallpaperObserver> {

	NSMutableSet* _mappedImageKeys;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)wallpaperWillChangeForVariant:(int)arg1 ;
-(id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
@end

