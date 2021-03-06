/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class RemindersCardController, UIView, RemindersListController;

@interface RemindersDetailContainerViewController : UIViewController {

	RemindersCardController* _cardController;
	UIView* _dimmingView;
	RemindersListController* _listController;

}

@property (nonatomic,readonly) RemindersCardController * cardController;              //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) RemindersListController * listController;                //@synthesize listController=_listController - In the implementation block
-(void)setListController:(id)arg1 ;
-(id)listController;
-(id)cardController;
-(void)loadView;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void).cxx_destruct;
-(void)setDimmed:(BOOL)arg1 ;
@end

