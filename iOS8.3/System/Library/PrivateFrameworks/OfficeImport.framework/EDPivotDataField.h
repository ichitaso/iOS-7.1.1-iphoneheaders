/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface EDPivotDataField : NSObject {

	long mBaseField;
	unsigned long mBaseItem;
	unsigned long mFieldId;
	unsigned long mNumFmtId;
	NSString* mName;
	int mFormat;

}
+(id)pivotDataField;
-(void)dealloc;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(unsigned long)numFmtId;
-(void)setNumFmtId:(unsigned long)arg1 ;
-(long)baseField;
-(void)setBaseField:(long)arg1 ;
-(unsigned long)baseItem;
-(void)setBaseItem:(unsigned long)arg1 ;
-(unsigned long)fieldId;
-(void)setFieldId:(unsigned long)arg1 ;
-(int)showDataAs;
-(void)setShowDataAs:(int)arg1 ;
@end

