/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSUDatabase : NSObject {

	sqlite3Ref _db;
	bool _readonly;
	sqlite3_stmtRef _beginTransactionStatement;
	sqlite3_stmtRef _commitTransactionStatement;
	sqlite3_stmtRef _rollbackTransactionStatement;

}

@property (nonatomic,readonly) bool readonly;                           //@synthesize readonly=_readonly - In the implementation block
@property (nonatomic,readonly) sqlite3Ref _sqliteDatabase;              //@synthesize db=_db - In the implementation block
-(id)_initWithPath:(id)arg1 readonly:(bool)arg2 error:(id*)arg3 ;
-(bool)closeWithError:(id*)arg1 ;
-(bool)executeUpdateWithSql:(const char*)arg1 error:(id*)arg2 ;
-(bool)prepareStatement:(sqlite3_stmt*)arg1 sql:(const char*)arg2 error:(id*)arg3 ;
-(bool)executeUpdate:(sqlite3_stmtRef)arg1 shouldFinalize:(bool)arg2 error:(id*)arg3 ;
-(bool)_upgradeSchemaWithError:(id*)arg1 ;
-(bool)startSingleResultQuery:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(bool)needsUpgradeFromSchemaVersion:(int)arg1 ;
-(bool)endSingleResultQuery:(sqlite3_stmtRef)arg1 shouldFinalize:(bool)arg2 error:(id*)arg3 ;
-(bool)upgradeFromSchemaVersion:(int)arg1 error:(id*)arg2 ;
-(id)initReadonlyWithPath:(id)arg1 error:(id*)arg2 ;
-(bool)compactWithError:(id*)arg1 ;
-(bool)beginTransactionWithError:(id*)arg1 ;
-(bool)commitTransactionWithError:(id*)arg1 ;
-(bool)rollbackTransactionWithError:(id*)arg1 ;
-(bool)setSchemaVersion:(int)arg1 error:(id*)arg2 ;
-(bool)readonly;
-(sqlite3Ref)_sqliteDatabase;
-(void)dealloc;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
@end

