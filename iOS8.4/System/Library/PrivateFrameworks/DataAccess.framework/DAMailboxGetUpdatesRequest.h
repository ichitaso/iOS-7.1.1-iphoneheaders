/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {

	int _maxSize;

}

@property (assign,nonatomic) int maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 ;
@end

