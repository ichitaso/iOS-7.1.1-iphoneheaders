/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore {

	DAFolder* _DAFolder;

}
-(bool)hasMoreFetchableMessages;
-(unsigned long long)fetchWindow;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2 ;
-(bool)shouldGrowFetchWindow;
-(unsigned long long)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(bool)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2 ;
-(bool)allowsAppend;
-(id)messageForRemoteID:(id)arg1 ;
-(id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(bool)shouldDownloadBodyDataForMessage:(id)arg1 ;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(bool)shouldSetSummaryForMessage:(id)arg1 ;
-(bool)canDeleteMessage:(id)arg1 ;
-(bool)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(bool*)arg3 consumer:(id)arg4 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4 ;
-(id)_folderIDForFetching;
-(void)_remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 filterByDate:(bool)arg3 handler:(/*^block*/ id)arg4 ;
-(void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2 ;
-(id)_fetchBodyDataForSearchResult:(id)arg1 format:(int)arg2 streamConsumer:(id)arg3 ;
-(id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(id)_additionalHeadersForAction:(int)arg1 ofMessage:(id)arg2 ;
-(void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(bool)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(id)additionalHeadersForReplyOfMessage:(id)arg1 ;
-(id)additionalHeadersForForwardOfMessage:(id)arg1 ;
@end
