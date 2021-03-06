/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, HKAchievement;

@interface _CountedAchievement : NSObject {

	NSMutableArray* _achievementsSortedByEarnedDate;
	unsigned _achievementType;
	unsigned _activityType;
	unsigned _numberOfTimesEarned;

}

@property (nonatomic,readonly) unsigned achievementType;                           //@synthesize achievementType=_achievementType - In the implementation block
@property (nonatomic,readonly) unsigned activityType;                              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) HKAchievement * mostRecentAchievement; 
@property (nonatomic,readonly) unsigned numberOfTimesEarned;                       //@synthesize numberOfTimesEarned=_numberOfTimesEarned - In the implementation block
-(unsigned)numberOfTimesEarned;
-(void)addAchievement:(id)arg1 ;
-(void)replaceMostRecentAchievementWithAchievement:(id)arg1 ;
-(HKAchievement *)mostRecentAchievement;
-(id)debugDescription;
-(unsigned)activityType;
-(id)initWithAchievement:(id)arg1 ;
-(unsigned)achievementType;
@end

