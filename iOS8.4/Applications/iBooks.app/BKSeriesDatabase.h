/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMCoreDataSource.h>
#import <iBooks/IMCoreDataSource.h>

@class NSString;

@interface BKSeriesDatabase : IMCoreDataSource <IMCoreDataSource>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)persistentStoreURL;
+(id)managedObjectModelName;
+(id)persistentStoreNameSeed;
+(id)persistentStoreVersion;
-(id)newManagedObjectContext;
-(id)init;
@end

