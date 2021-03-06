/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSString, NSObject, NSURL, NSMutableDictionary, NSMutableSet, SYDScheduler, SYDJournal, SYDApplicationScheduling;

@interface SYDApplication : NSObject {

	NSOperationQueue* queue;
	NSString* bundleIdentifier;
	NSString* storeIdentifier;
	NSString* schedulerIdentifier;
	NSString* additionalChangeNotificationName;
	BOOL _shouldResetOnFirstSync;
	NSObject<OS_dispatch_queue>* refreshQueue;
	NSURL* plistURL;
	NSMutableDictionary* plistCache;
	NSMutableSet* pendingDirtyKeys;
	NSMutableDictionary* pendingLocalData;
	SYDScheduler* scheduler;
	long long changeCount;
	long long initialSyncChangeCount;
	SYDJournal* journal;
	SYDApplicationScheduling* scheduling;
	unsigned debugCount;
	BOOL inactive;
	BOOL daemon;
	BOOL isAdditionalStore;
	BOOL simulatePushNotification;

}

@property (nonatomic,retain) SYDScheduler * scheduler; 
@property (nonatomic,readonly) SYDApplicationScheduling * scheduling; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * storeIdentifier; 
@property (nonatomic,readonly) NSString * schedulerIdentifier; 
@property (nonatomic,readonly) BOOL isAdditionalStore; 
@property (nonatomic,readonly) NSURL * plistURL; 
@property (getter=isDevelopmentApp,nonatomic,readonly) BOOL developmentApp; 
@property (getter=isDaemon,nonatomic,readonly) BOOL daemon; 
@property (nonatomic,readonly) NSString * displayIdentifier; 
@property (assign,nonatomic) BOOL inactive; 
+(id)_schedulerIdentifierMapping;
+(id)defaultSchedulerIdentifier;
+(id)installInfoForBundleIdentifiers:(id)arg1 ;
+(id)installInfoForBundleIdentifier:(id)arg1 ;
+(id)additionalStoreIdentifiersForBundleIdentifier:(id)arg1 installInfo:(id)arg2 ;
+(id)defaultSchedulerIdentifierForStoreIdentifier:(id)arg1 ;
+(BOOL)storeIdentifierIsRegisteredWithMultipleInternalApps:(id)arg1 ;
+(BOOL)storeIdentifierShouldResetOnDisable:(id)arg1 ;
+(id)schedulerIdentifiers;
+(Class)classForSchedulerWithIdentifier:(id)arg1 ;
+(BOOL)installInfoAllowsKeyValueStore:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(void)initialize;
-(id)diagnosticDescription;
-(id)storeIdentifier;
-(id)_initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 persistentState:(id)arg3 ;
-(int)refreshStoreIdentifierWithInstallInfo:(id)arg1 ;
-(id)plistURL;
-(void)resetSyncState;
-(void)_loadPlistIfNecessary;
-(BOOL)_writePlistIfNecessary;
-(void)_discardPlistIfPossible;
-(id)persistentState;
-(void)resetAllValuesForce:(BOOL)arg1 ;
-(id)scheduling;
-(BOOL)isDevelopmentApp;
-(void)beginDebuggingStore;
-(void)endDebuggingStore;
-(id)initWithBundleIdentifier:(id)arg1 persistentState:(id)arg2 ;
-(id)initAdditionalStoreWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 ;
-(id)initAdditionalStoreWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 persistentState:(id)arg3 ;
-(void)setScheduler:(id)arg1 ;
-(int)refreshStoreIdentifier;
-(void)discardJournalEntriesWithChangeCount:(long long)arg1 ;
-(id)storeLocalChanges:(id)arg1 withKnownChangeCount:(long long)arg2 ;
-(id)startSynchronizingWithServer;
-(void)stopSynchronizingWithServerWithServerChanges:(id)arg1 ;
-(BOOL)wasSyncSuccessfulWithServerChanges:(id)arg1 ;
-(void)deactivateWithHandler:(/*^block*/ id)arg1 ;
-(void)accountDidChange:(int)arg1 ;
-(int)filteredSyncReasonForReason:(int)arg1 ;
-(id)schedulerIdentifier;
-(id)scheduler;
-(BOOL)inactive;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isAdditionalStore;
-(void)dealloc;
-(id)description;
-(id)bundleIdentifier;
-(id)displayIdentifier;
-(void)didReceiveMemoryWarning;
-(void)perform:(/*^block*/ id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)isDaemon;
@end

