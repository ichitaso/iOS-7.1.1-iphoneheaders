/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TSUZipWriterEntry : NSObject {

	NSString* _name;
	unsigned _CRC;
	unsigned long long _size;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                           //@synthesize CRC=_CRC - In the implementation block
-(void)setCRC:(unsigned)arg1 ;
-(unsigned)CRC;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void).cxx_destruct;
@end

