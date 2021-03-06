/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UILayoutSupport.h>

@class NSArray, NSString;

@interface _UILayoutGuide : UIView <UILayoutSupport> {

	BOOL _allowsArchivingAsSubview;
	BOOL _horizontal;
	NSArray* _constraintsToRemoveAtRuntime;
	NSString* _archivedIdentifier;

}

@property (assign,setter=_setHorizontal:,getter=isHorizontal,nonatomic) BOOL _horizontal;                                 //@synthesize horizontal=_horizontal - In the implementation block
@property (setter=_setArchivedIdentifier:,nonatomic,copy) NSString * _archivedIdentifier;                                 //@synthesize archivedIdentifier=_archivedIdentifier - In the implementation block
@property (assign,setter=_setAllowsArchivingAsSubview:,nonatomic) BOOL _allowsArchivingAsSubview;                         //@synthesize allowsArchivingAsSubview=_allowsArchivingAsSubview - In the implementation block
@property (setter=_setConstraintsToRemoveAtRuntime:,nonatomic,copy) NSArray * _constraintsToRemoveAtRuntime;              //@synthesize constraintsToRemoveAtRuntime=_constraintsToRemoveAtRuntime - In the implementation block
@property (nonatomic,readonly) float length; 
+(id)_verticalLayoutGuide;
+(id)classFallbacksForKeyedArchiver;
+(id)_horizontalLayoutGuide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)length;
-(BOOL)_allowsArchivingAsSubview;
-(id)_archivedIdentifier;
-(id)_constraintsToRemoveAtRuntime;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(BOOL)isHorizontal;
-(id)_relevantLayoutVariables;
-(void)_setUpCounterDimensionConstraint;
-(void)_setAllowsArchivingAsSubview:(BOOL)arg1 ;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(void)_setHorizontal:(BOOL)arg1 ;
@end

