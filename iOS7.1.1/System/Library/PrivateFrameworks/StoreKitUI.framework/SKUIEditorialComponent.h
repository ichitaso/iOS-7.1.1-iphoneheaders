/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, NSArray;

@interface SKUIEditorialComponent : SKUIPageComponent {

	NSString* _bodyText;
	NSArray* _links;
	long long _maximumBodyLines;
	SKUIEditorialStyle _style;
	NSString* _titleText;
	bool _usesLockupTitle;

}

@property (nonatomic,readonly) NSString * bodyText;                                        //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,readonly) NSString * titleText;                                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) SKUIEditorialStyle editorialStyle;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSArray * links;                                            //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) long long maximumBodyLines;                                 //@synthesize maximumBodyLines=_maximumBodyLines - In the implementation block
@property (getter=_usesLockupTitle,nonatomic,readonly) bool _usesLockupTitle;              //@synthesize usesLockupTitle=_usesLockupTitle - In the implementation block
-(id)links;
-(void).cxx_destruct;
-(id)bodyText;
-(id)initWithCustomPageContext:(id)arg1 ;
-(long long)componentType;
-(id)initWithUberText:(id)arg1 ;
-(SKUIEditorialStyle)editorialStyle;
-(id)initWithBrickRoomText:(id)arg1 ;
-(void)_setTitleText:(id)arg1 ;
-(long long)maximumBodyLines;
-(id)titleText;
-(bool)_usesLockupTitle;
@end

