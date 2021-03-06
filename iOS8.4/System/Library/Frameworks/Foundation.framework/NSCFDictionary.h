/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface NSCFDictionary : NSMutableDictionary
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)retain;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)removeObjectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(oneway void)release;
-(void)finalize;
@end

