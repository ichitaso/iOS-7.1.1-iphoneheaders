/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned long long hashMask;
	unsigned long long count;

}
-(void)dealloc;
-(long long)count;
-(BOOL)lookupKey:(id)arg1 identifier:(long long*)arg2 ;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned long long)arg2 ;
@end

