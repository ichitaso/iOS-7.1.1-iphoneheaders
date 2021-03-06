/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>

@protocol OS_dispatch_queue;
@class NSObject, MFSparseMutable64IndexSet, CRRecentContactsLibrary;

@interface _MessageAddressScannerQueue : MFBufferedQueue {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	MFSparseMutable64IndexSet* _hashes;
	CRRecentContactsLibrary* _recentsLibrary;

}

@property (nonatomic,retain) CRRecentContactsLibrary * recentsLibrary;              //@synthesize recentsLibrary=_recentsLibrary - In the implementation block
-(char)handleHashes:(id)arg1 ;
-(CRRecentContactsLibrary *)recentsLibrary;
-(char)addHash:(long long)arg1 ;
-(void)setRecentsLibrary:(CRRecentContactsLibrary *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(char)isEmpty;
-(void)setTargetQueue:(id)arg1 ;
-(char)_flush;
@end

