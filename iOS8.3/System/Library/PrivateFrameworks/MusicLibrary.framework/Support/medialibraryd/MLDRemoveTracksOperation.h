/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:44:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <medialibraryd/MLDDatabaseOperation.h>

@interface MLDRemoveTracksOperation : MLDDatabaseOperation
-(char)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(char)_removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3 ;
-(char)_removeSource:(int)arg1 usingTransaction:(id)arg2 ;
-(unsigned)type;
-(void)main;
@end

