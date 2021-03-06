/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSNumber, PQLConnection, NSMutableDictionary;


@protocol BRCContainer
@property (assign,nonatomic) char needsSave; 
@property (nonatomic,retain) NSNumber * dbRowID; 
@property (nonatomic,readonly) char isSharedContainer; 
@property (nonatomic,readonly) char isPrivateContainer; 
@property (nonatomic,readonly) PQLConnection * db; 
@property (nonatomic,readonly) NSMutableDictionary * plist; 
@required
-(void)setNeedsSave:(char)arg1;
-(PQLConnection *)db;
-(char)isPrivateContainer;
-(char)isSharedContainer;
-(NSNumber *)dbRowID;
-(NSMutableDictionary *)plist;
-(void)setDbRowID:(id)arg1;
-(char)needsSave;
-(char)dumpTablesToContext:(id)arg1 error:(id*)arg2;
-(char)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2;
-(char)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2;

@end

