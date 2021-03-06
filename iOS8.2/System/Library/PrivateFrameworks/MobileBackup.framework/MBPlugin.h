/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBPlugin
@optional
-(id)startingBackupWithEngine:(id)arg1;
-(id)preparingBackupWithEngine:(id)arg1;
-(id)preparedBackupWithEngine:(id)arg1;
-(id)backingUpSQLiteFileCopyAtPath:(id)arg1 temporaryPath:(id)arg2;
-(id)endingBackupWithEngine:(id)arg1;
-(id)endedBackupWithEngine:(id)arg1 error:(id)arg2;
-(id)startingRestoreWithEngine:(id)arg1;
-(id)preparingRestoreWithEngine:(id)arg1;
-(char)shouldRestoreContentWithEngine:(id)arg1 atPath:(id)arg2;
-(char)shouldRestoreContentWithEngine:(id)arg1 fileInfo:(id)arg2;
-(char)shouldBackgroundRestoreContentWithEngine:(id)arg1 fileInfo:(id)arg2;
-(id)endingRestoreWithEngine:(id)arg1;
-(id)endedRestoreWithEngine:(id)arg1 error:(id)arg2;

@end

