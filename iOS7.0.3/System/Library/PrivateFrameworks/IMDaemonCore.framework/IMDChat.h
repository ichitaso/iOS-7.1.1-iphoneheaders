/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSString, NSDictionary, NSArray, FZMessage, NSMutableDictionary, IMDServiceSession, IMDAccount, IMDService;

@interface IMDChat : NSObject {

	NSRecursiveLock* _lock;
	NSString* _accountID;
	NSString* _serviceName;
	NSDictionary* _properties;
	NSString* _chatIdentifier;
	NSString* _guid;
	NSString* _roomName;
	NSString* _displayName;
	NSString* _lastAddressedLocalHandle;
	NSArray* _participants;
	FZMessage* _lastMessage;
	NSMutableDictionary* _chatInfo;
	int _state;
	unsigned char _style;
	unsigned _unreadCount;
	long long _rowID;
	BOOL _isArchived;

}

@property (copy) NSString * guid; 
@property (copy) NSString * chatIdentifier; 
@property (copy) NSString * accountID; 
@property (copy) NSString * serviceName; 
@property (copy) NSArray * participants; 
@property (assign) unsigned char style; 
@property (assign) int state; 
@property (assign) unsigned unreadCount; 
@property (assign) long long rowID; 
@property (copy) NSString * roomName; 
@property (copy) NSString * displayName; 
@property (readonly) IMDServiceSession * serviceSession; 
@property (readonly) IMDAccount * account; 
@property (readonly) IMDService * service; 
@property (retain) NSDictionary * properties; 
@property (retain) FZMessage * lastMessage; 
@property (copy) NSString * lastAddressedLocalHandle; 
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSDictionary * chatProperties; 
@property (readonly) BOOL isArchived; 
-(id)service;
-(long long)rowID;
-(id)serviceName;
-(void)setParticipants:(id)arg1 ;
-(id)participants;
-(void)dealloc;
-(id)description;
-(void)setStyle:(unsigned char)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(unsigned char)style;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(id)lastMessage;
-(id)chatIdentifier;
-(id)roomName;
-(void)setRoomName:(id)arg1 ;
-(id)guid;
-(void)setLastAddressedLocalHandle:(id)arg1 ;
-(void)setChatIdentifier:(id)arg1 ;
-(void)_updateCachedParticipants;
-(void)addParticipants:(id)arg1 ;
-(void)removeParticipants:(id)arg1 ;
-(id)copyDictionaryRepresentation:(BOOL)arg1 ;
-(void)setLastMessage:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 chatIdentifier:(id)arg4 participants:(id)arg5 roomName:(id)arg6 displayName:(id)arg7 lastAddressedLocalHandle:(id)arg8 properties:(id)arg9 state:(int)arg10 style:(unsigned char)arg11 ;
-(id)lastAddressedLocalHandle;
-(void)_setUnreadCount:(unsigned)arg1 ;
-(BOOL)isArchived;
-(void)_setRowID:(long long)arg1 ;
-(void)addParticipant:(id)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(id)serviceSession;
-(id)chatProperties;
-(void)_updateLastMessage:(id)arg1 ;
-(void)updateProperties:(id)arg1 ;
-(void)updateDisplayName:(id)arg1 ;
-(void)setAccountID:(id)arg1 ;
-(id)account;
-(unsigned)unreadCount;
-(void)setServiceName:(id)arg1 ;
-(id)accountID;
-(void)setDisplayName:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
@end

