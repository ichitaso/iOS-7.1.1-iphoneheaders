/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKEditItemViewControllerProtocol
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@optional
-(void)saveAndDismissWithExtremePrejudice;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id)arg1;
-(BOOL)presentModally;
-(void)setPresentModally:(BOOL)arg1;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(void)setEditItemShouldBeAskedForInjectableViewController:(BOOL)arg1;

@end

