/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/WiFiDataMigrator.migrator/WiFiDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WiFiDataMigrator/WiFiDataMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@interface WiFiDataMigrator : DataClassMigrator
-(void)removeNetworkChannelList:(WiFiManagerClientRef)arg1 ;
-(void)removeDefaultAcceptedTypeLEAP:(WiFiManagerClientRef)arg1 ;
-(void)turnWiFiOn:(WiFiManagerClientRef)arg1 ;
-(void)disableAskToJoin:(WiFiManagerClientRef)arg1 ;
-(void)disableAutoJoinAdhocNetworks:(WiFiManagerClientRef)arg1 ;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end

