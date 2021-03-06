/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <Foundation/NSLocking.h>

@class NSUndoManager, NSMutableSet;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {

	int _spinLock;
	id _parentObjectStore;
	NSUndoManager* _undoManager;
	void* _dispatchQueue;
	struct {
		unsigned _registeredForCallback : 1;
		unsigned _propagatesDeletesAtEndOfEvent : 1;
		unsigned _exhaustiveValidation : 1;
		unsigned _processingChanges : 1;
		unsigned _useCommittedSnapshot : 1;
		unsigned _registeredUndoTransactionID : 1;
		unsigned _retainsAllRegisteredObjects : 1;
		unsigned _savingInProgress : 1;
		unsigned _wasDisposed : 1;
		unsigned _unprocessedChangesPending : 1;
		unsigned _isDirty : 1;
		unsigned _ignoreUndoCheckpoints : 1;
		unsigned _propagatingDeletes : 1;
		unsigned _isNSEditorEditing : 1;
		unsigned _isMainThreadBlessed : 1;
		unsigned _isImportContext : 1;
		unsigned _preflightSaveInProgress : 1;
		unsigned _disableDiscardEditing : 1;
		unsigned _isParentStoreContext : 1;
		unsigned _postSaveNotifications : 1;
		unsigned _isMerging : 1;
		unsigned _reservedFlags : 11;
	}  _flags;
	NSMutableSet* _unprocessedChanges;
	NSMutableSet* _unprocessedDeletes;
	NSMutableSet* _unprocessedInserts;
	NSMutableSet* _insertedObjects;
	NSMutableSet* _deletedObjects;
	NSMutableSet* _changedObjects;
	NSMutableSet* _lockedObjects;
	NSMutableSet* _refreshedObjects;
	id _infoByGID;
	id* _cachedObsInfoByEntity;
	short _undoTransactionID;
	id _lock;
	long _lockCount;
	long _objectStoreLockCount;
	double _fetchTimestamp;
	id _delegate;
	id _referenceQueue;
	id _userinfo;
	id _mergePolicy;
	int _cd_rc;
	int _ignoreChangeNotification;
	id _editors;
	id* _debuggingRecords;
	id _tombstonedIDs;
	id _childIDMappings;

}
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)_handleError:(id)arg1 withError:(id*)arg2 ;
+(void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+(void)initialize;
+(void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2 ;
-(BOOL)isUserInterfaceContext;
-(id)photoLibrary;
-(void)pl_refresh;
-(id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(BOOL)arg3 ;
-(BOOL)_hasIDMappings;
-(id)_mappedForParentStoreID:(id)arg1 ;
-(BOOL)tryLock;
-(void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)_disableChangeNotifications;
-(void)lockObjectStore;
-(id)_parentStore;
-(void)unlockObjectStore;
-(void)_enableChangeNotifications;
-(void)_forceRegisterLostFault:(id)arg1 ;
-(BOOL)_handleError:(id)arg1 withError:(id*)arg2 ;
-(void)insertObject:(id)arg1 ;
-(id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2 ;
-(void)_lockObjectStore_oldSchool;
-(void)_unlockObjectStore_oldSchool;
-(void)_registerForNotificationsWithCoordinator:(id)arg1 ;
-(void)_setPersistentStoreCoordinator:(id)arg1 ;
-(void)_setRetainsRegisteredObjects:(BOOL)arg1 ;
-(void)discardEditing;
-(void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3 ;
-(void)_resetAllChanges;
-(void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1 ;
-(void)_processReferenceQueue:(BOOL)arg1 ;
-(void)_unregisterForNotifications;
-(void)_dispose:(BOOL)arg1 ;
-(void)_dealloc__;
-(void)_stopObservingUndoManagerNotifications;
-(void)_startObservingUndoManagerNotifications;
-(void)_setUndoManager:(id)arg1 ;
-(BOOL)_processRecentChanges:(id*)arg1 ;
-(id)_retainedRegisteredObjects;
-(void)_performCoordinatorActionAndWait:(/*^block*/ id)arg1 ;
-(BOOL)_ignoringChangeNotifications;
-(void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2 ;
-(void)_registerClearStateWithUndoManager;
-(void)_establishEventSnapshotsForObject:(id)arg1 ;
-(void)_enqueueEndOfEventNotification;
-(BOOL)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)_prepareForPushChanges:(id*)arg1 ;
-(id)_newSaveRequestForCurrentState;
-(void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2 ;
-(id)mergePolicy;
-(void)_thereIsNoSadnessLikeTheDeathOfOptimism;
-(BOOL)_handleOptimisticLockingError:(id)arg1 withError:(id*)arg2 ;
-(void)_didSaveChanges;
-(id)_retainedObjectWithID:(id)arg1 ;
-(id)_retainedObjectWithID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_attemptCoalesceChangesForFetch;
-(unsigned)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4 ;
-(id)_createStoreFetchRequestForFetchRequest:(id)arg1 ;
-(BOOL)propagatesDeletesAtEndOfEvent;
-(void)setPropagatesDeletesAtEndOfEvent:(BOOL)arg1 ;
-(id)_committedSnapshotForObject:(id)arg1 ;
-(void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(BOOL)arg3 ;
-(void)_prepareUnprocessedDeletionAfterRefresh:(id)arg1 ;
-(id)_initWithParentObjectStore:(unsigned long)arg1 ;
-(void)_forceRemoveFromDeletedObjects:(id)arg1 ;
-(BOOL)_mergeRefreshObject:(id)arg1 mergeChanges:(BOOL)arg2 withPersistentSnapshot:(id)arg3 ;
-(void)_mergeRefreshEpilogueForObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(void)_setParentContext:(id)arg1 ;
-(void)setRetainsRegisteredObjects:(BOOL)arg1 ;
-(BOOL)retainsRegisteredObjects;
-(void)assignObject:(id)arg1 toPersistentStore:(id)arg2 ;
-(BOOL)_checkObjectForExistenceAndCacheRow:(id)arg1 ;
-(void)detectConflictsForObject:(id)arg1 ;
-(void)mergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(id)_newUnchangedLockedObjects;
-(void)_registerObject:(id)arg1 withID:(id)arg2 ;
-(void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2 ;
-(void)_disposeObjects:(id*)arg1 count:(unsigned long)arg2 notifyParent:(BOOL)arg3 ;
-(void)_clearUnprocessedUpdates;
-(void)_clearUpdates;
-(void)_clearUnprocessedInsertions;
-(void)_clearInsertions;
-(void)_clearUnprocessedDeletions;
-(void)_clearDeletions;
-(void)_clearLockedObjects;
-(void)_clearRefreshedObjects;
-(void)_incrementUndoTransactionID;
-(id)_globalIDForObject:(id)arg1 ;
-(void)_clearOriginalSnapshotForObject:(id)arg1 ;
-(BOOL)_validateObjects:(id)arg1 forOperation:(unsigned)arg2 error:(id*)arg3 exhaustive:(BOOL)arg4 forSave:(BOOL)arg5 ;
-(void)_clearOriginalSnapshotAndInitializeRec:(id)arg1 ;
-(void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 ;
-(id)_globalIDsForObjects:(id)arg1 ;
-(unsigned)_batchRetainedObjects:(id*)arg1 forCount:(unsigned)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(BOOL)arg5 ;
-(BOOL)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_validateChangesForSave:(id*)arg1 ;
-(void)_informParentStoreOfInterestInObjectIDs:(id)arg1 ;
-(void)_informParentStoreNoLongerInterestedInObjectIDs:(id)arg1 ;
-(id)_retainedObjectsFromRemovedStore:(id)arg1 ;
-(BOOL)_stopsValidationAfterFirstError;
-(void)_setStopsValidationAfterFirstError:(BOOL)arg1 ;
-(id)_debuggingOnly_localObjectForGlobalID:(id)arg1 ;
-(id)_currentEventSnapshotForObject:(id)arg1 ;
-(void)_growRegistrationCollectionForEntitySlot:(unsigned)arg1 toSize:(unsigned)arg2 ;
-(void)_setIsUbiquityImportContext:(BOOL)arg1 ;
-(BOOL)_isImportContext;
-(BOOL)_isPreflightSaveInProgress;
-(void)_setDisableDiscardEditing:(BOOL)arg1 ;
-(BOOL)_disableDiscardEditing;
-(void)_setPostSaveNotifications:(BOOL)arg1 ;
-(BOOL)_postSaveNotifications;
-(void)_setStalenessInterval:(double)arg1 ;
-(void)_undoInsertions:(id)arg1 ;
-(void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3 ;
-(void)_undoDeletionsMovedToUpdates:(id)arg1 ;
-(void)_createAndPostChangeNotification:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 withRefreshes:(id)arg4 ;
-(void)_undoDeletions:(id)arg1 ;
-(void)_undoUpdates:(id)arg1 ;
-(void)_clearChangedThisTransaction:(id)arg1 ;
-(void)_postRefreshedObjectsNotificationAndClearList;
-(void)_updateUnprocessedOwnDestinations:(id)arg1 ;
-(BOOL)_propagatePendingDeletesAtEndOfEvent:(id*)arg1 ;
-(id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5 ;
-(id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 ;
-(id)_processPendingUpdates:(id)arg1 ;
-(void)_registerUndoForModifiedObjects:(id)arg1 ;
-(void)_registerUndoForInsertedObjects:(id)arg1 ;
-(void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2 ;
-(void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 ;
-(void)_processRecentlyForgottenObjects:(id)arg1 ;
-(BOOL)_processDeletedObjects:(id*)arg1 ;
-(void)_propagateDeletesUsingTable:(id)arg1 ;
-(void)_forceInsertionForObject:(id)arg1 ;
-(void)_undoManagerCheckpoint:(id)arg1 ;
-(void)_noop:(id)arg1 ;
-(void)_processObjectStoreChanges:(id)arg1 ;
-(void)_processNotificationQueue;
-(void)_storeConfigurationChanged:(id)arg1 ;
-(void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2 ;
-(void)_processChangedStoreConfigurationNotification:(id)arg1 ;
-(void)_objectsChangedInStore:(id)arg1 ;
-(BOOL)commitEditing;
-(void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(SCD_Struct_NS10*)arg3 ;
-(void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(BOOL)arg4 contextInfo:(void*)arg5 delayed:(BOOL)arg6 ;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(void)_stopConflictDetectionForObject:(id)arg1 ;
-(void)_mergeChangesFromRemoteContextSave:(id)arg1 ;
-(void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3 ;
-(id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)retainCount;
-(id)_delegate;
-(id)undoManager;
-(void)undo;
-(void)redo;
-(id)userInfo;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)lock;
-(void)unlock;
-(BOOL)isEditing;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(void)setUndoManager:(id)arg1 ;
-(id)initWithConcurrencyType:(unsigned)arg1 ;
-(void)setPersistentStoreCoordinator:(id)arg1 ;
-(void)performBlockAndWait:(/*^block*/ id)arg1 ;
-(void)setParentContext:(id)arg1 ;
-(void)performBlock:(/*^block*/ id)arg1 ;
-(id)parentContext;
-(BOOL)save:(id*)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(BOOL)hasChanges;
-(void)processPendingChanges;
-(id)objectWithID:(id)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)rollback;
-(id)persistentStoreCoordinator;
-(unsigned)concurrencyType;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(double)stalenessInterval;
-(void)setStalenessInterval:(double)arg1 ;
-(void)setMergePolicy:(id)arg1 ;
-(id)registeredObjects;
-(id)objectRegisteredForID:(id)arg1 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(id)_orderedSetWithResultsFromFetchRequest:(id)arg1 ;
-(id)deletedObjects;
-(id)insertedObjects;
-(id)updatedObjects;
-(void)finalize;
@end

