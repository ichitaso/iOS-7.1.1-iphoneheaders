/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long __versionNumber;
	NSMutableDictionary* _propertyCache;
	void* _reserved1;

}
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)propertyCache;
-(void)setPropertyCache:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)objectID;
-(id)initWithObjectID:(id)arg1 ;
@end

