/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSLogging.h>

@class NSString;

@interface _BSCategoryLogger : NSObject <BSLogging> {

	NSString* _name;
	NSString* _category;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * category;                   //@synthesize category=_category - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)logWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(void)logWithFormat:(id)arg1 ;
-(id)initWithLoggerName:(id)arg1 category:(id)arg2 ;
@end

