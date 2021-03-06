/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber;

@interface BKBookmarkPageCount : NSManagedObject

@property (nonatomic,retain) NSString * annotationUuid; 
@property (nonatomic,retain) NSString * lookupKey; 
@property (nonatomic,retain) NSNumber * pageNumber; 
@property (nonatomic,retain) NSNumber * pageCount; 
@property (nonatomic,retain) NSString * paginationRevision; 
@property (nonatomic,readonly) NSRange pageRange; 
-(NSRange)pageRange;
@end

