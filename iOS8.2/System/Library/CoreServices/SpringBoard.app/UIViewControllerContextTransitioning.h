/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIViewControllerContextTransitioning <NSObject>
@required
-(id)containerView;
-(id)viewControllerForKey:(id)arg1;
-(id)viewForKey:(id)arg1;
-(CGRect*)initialFrameForViewController:(id)arg1;
-(CGRect*)finalFrameForViewController:(id)arg1;
-(char)isInteractive;
-(char)transitionWasCancelled;
-(void)completeTransition:(char)arg1;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(float)arg1;
-(char)isAnimated;
-(int)presentationStyle;
-(CGAffineTransform*)targetTransform;

@end

