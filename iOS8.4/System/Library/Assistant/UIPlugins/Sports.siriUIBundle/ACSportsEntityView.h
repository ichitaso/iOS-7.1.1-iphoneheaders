/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsDomainObjectView.h>

@class SASportsEntity;

@interface ACSportsEntityView : ACSportsDomainObjectView {

	SASportsEntity* _entity;

}

@property (nonatomic,retain) SASportsEntity * entity;              //@synthesize entity=_entity - In the implementation block
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isSelectable;
-(void)setEntity:(SASportsEntity *)arg1 ;
-(SASportsEntity *)entity;
-(double)contentHeight;
@end

