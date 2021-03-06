/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MergeAndRemoveMobileMeAccounts/ASSBasicAccount.h>
#import <MergeAndRemoveMobileMeAccounts/AccountCreationProtocol.h>
#import <MergeAndRemoveMobileMeAccounts/AccountSettingsUIAccount.h>

@class NSString;

@interface ASSDeviceLocalAccount : ASSBasicAccount <AccountCreationProtocol, AccountSettingsUIAccount>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_identifier;
+(void*)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2 ;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
+(id)accountWithBasicAccount:(id)arg1 ;
+(id)basicAccountProperties;
+(id)typeString;
-(void)_saveChangesToOnMyDeviceAccount;
-(BOOL)_setTetheredDataSourceEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)_deleteDataSourceForDataclass:(id)arg1 ;
-(void)setTetheredEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)otherAccountEnabledForDataclass:(id)arg1 ;
-(void)showLocalStoreIfAppropriateForDataclass:(id)arg1 ;
-(void)deleteLocalDataSourceForDataclass:(id)arg1 ;
-(void)hideLocalStoreForDataclass:(id)arg1 ;
-(id)uniqueId;
-(BOOL)supportsPush;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)identifier;
-(id)displayName;
-(id)syncStoreIdentifier;
@end

