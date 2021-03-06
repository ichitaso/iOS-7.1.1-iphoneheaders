/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject {

	NSString* sectionIdentifier;
	NSString* actionKey;
	TableViewManager* tableManager;

}

@property (nonatomic,retain) NSString * sectionIdentifier; 
@property (nonatomic,retain) NSString * actionKey; 
@property (assign,nonatomic) TableViewManager * tableManager; 
+(id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2 ;
-(TableViewManager *)tableManager;
-(BOOL)isPrimaryRecommendation;
-(NSString *)sectionIdentifier;
-(id)getSectionInfoWithLongStrings:(BOOL)arg1 ;
-(void)selectPrimaryRecommendation;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(void)setTableManager:(TableViewManager *)arg1 ;
-(void)setActionKey:(NSString *)arg1 ;
-(NSString *)actionKey;
@end

