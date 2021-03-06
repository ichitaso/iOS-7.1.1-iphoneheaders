/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAttachmentDataProvider.h>

@class MFWeakReferenceHolder, MFMessageLibrary, NSString;

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProvider> {

	MFWeakReferenceHolder* _messageLibraryHolder;

}

@property (assign,nonatomic,__weak) MFMessageLibrary * messageLibrary; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibrary:(id)arg1 ;
-(void)dealloc;
-(char)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3 ;
-(void)setMessageLibrary:(MFMessageLibrary *)arg1 ;
-(id)messageForAttachment:(id)arg1 ;
-(MFMessageLibrary *)messageLibrary;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
@end

