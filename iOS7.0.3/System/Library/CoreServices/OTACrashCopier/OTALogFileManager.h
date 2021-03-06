/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface OTALogFileManager : NSObject {

	NSArray* _logDirectories;
	NSString* _retiredDirectory;
	double _maxRetiredLogAge;
	unsigned _maxRetiredLogsPerType;

}

@property (nonatomic,readonly) NSArray * logDirectories;                  //@synthesize logDirectories=_logDirectories - In the implementation block
@property (nonatomic,readonly) NSString * retiredDirectory;               //@synthesize retiredDirectory=_retiredDirectory - In the implementation block
@property (assign,nonatomic) double maxRetiredLogAge;                     //@synthesize maxRetiredLogAge=_maxRetiredLogAge - In the implementation block
@property (assign,nonatomic) unsigned maxRetiredLogsPerType;              //@synthesize maxRetiredLogsPerType=_maxRetiredLogsPerType - In the implementation block
+(id)logPathsFromDirectory:(id)arg1 withExtension:(id)arg2 ;
+(id)defaultLogDirectories;
+(id)defaultRetiredDirectory;
+(id)logPathsFromDirectory:(id)arg1 ;
-(void)moveAsidePendingLogs;
-(void)cleanupRetiredLogs;
-(void)gatherNonMobileLogs;
-(id)logPathsWithExtension:(id)arg1 ;
-(void)retireLog:(id)arg1 ;
-(id)sortedLogPathsForSubmissionWithExtension:(id)arg1 ;
-(id)initWithLogDirectories:(id)arg1 retiredDirectory:(id)arg2 ;
-(void)_createRetiredDirectoryIfNeeded;
-(id)sortedLogPathsWithExtension:(id)arg1 ;
-(id)retiredDirectory;
-(id)logDirectories;
-(double)maxRetiredLogAge;
-(void)setMaxRetiredLogAge:(double)arg1 ;
-(unsigned)maxRetiredLogsPerType;
-(void)setMaxRetiredLogsPerType:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
@end

