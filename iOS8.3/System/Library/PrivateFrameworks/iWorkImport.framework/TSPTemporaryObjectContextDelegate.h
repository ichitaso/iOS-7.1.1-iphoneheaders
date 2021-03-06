/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObjectContextDelegate.h>

@class NSUUID, NSMutableSet, NSError, NSSet, NSString;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate> {

	NSMutableSet* _persistenceWarnings;
	char _ignoreDocumentSupport;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSSet * persistenceWarnings;                                         //@synthesize persistenceWarnings=_persistenceWarnings - In the implementation block
@property (assign,nonatomic) char ignoreDocumentSupport;                                            //@synthesize ignoreDocumentSupport=_ignoreDocumentSupport - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) char isDocumentSupportTemporary; 
@property (nonatomic,readonly) char areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) NSUUID * baseUUIDForObjectUUID; 
@property (nonatomic,readonly) char preserveDocumentRevisionIdentifierForSequenceZero; 
@property (nonatomic,readonly) char isInCollaborationMode; 
@property (nonatomic,readonly) char isInReadOnlyMode; 
-(char)ignoreDocumentSupport;
-(void)suspendAutosave;
-(void)resumeAutosave;
-(void)addPersistenceWarnings:(id)arg1 ;
-(id)persistenceWarningsForData:(id)arg1 flags:(unsigned)arg2 ;
-(void)presentPersistenceError:(id)arg1 ;
-(NSSet *)persistenceWarnings;
-(void)setIgnoreDocumentSupport:(char)arg1 ;
-(id)init;
-(NSError *)error;
@end

