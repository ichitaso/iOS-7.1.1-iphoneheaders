/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject <NSCoding, NSCopying> {

	NSDate* _date;
	BOOL _wasCloudRestore;
	NSString* _deviceBuildVersion;
	NSString* _backupBuildVersion;

}

@property (readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) BOOL wasCloudRestore;                       //@synthesize wasCloudRestore=_wasCloudRestore - In the implementation block
@property (readonly) NSString * deviceBuildVersion;              //@synthesize deviceBuildVersion=_deviceBuildVersion - In the implementation block
@property (readonly) NSString * backupBuildVersion;              //@synthesize backupBuildVersion=_backupBuildVersion - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)date;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setDate:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setWasCloudRestore:(BOOL)arg1 ;
-(void)setDeviceBuildVersion:(id)arg1 ;
-(void)setBackupBuildVersion:(id)arg1 ;
-(BOOL)wasCloudRestore;
-(id)deviceBuildVersion;
-(id)backupBuildVersion;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

