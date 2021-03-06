/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSAttributedString, NSMutableArray, NSArray, UIColor;

@interface IKTextElement : IKViewElement {

	NSAttributedString* _text;
	unsigned long long _textStyle;
	NSMutableArray* _textBadges;

}

@property (nonatomic,retain,readonly) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * badges; 
@property (nonatomic,readonly) unsigned long long textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) long long maxLines; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,retain) NSMutableArray * textBadges;                     //@synthesize textBadges=_textBadges - In the implementation block
+(BOOL)shouldParseChildDOMElements;
-(id)textAttributes;
-(NSAttributedString *)text;
-(unsigned long long)alignment;
-(UIColor *)color;
-(unsigned long long)textStyle;
-(id)_attributedStringFromNode:(id)arg1 elementFactory:(id)arg2 ;
-(unsigned long long)_styleForTagName:(id)arg1 ;
-(NSMutableArray *)textBadges;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(void)setTextBadges:(NSMutableArray *)arg1 ;
-(id)attributedStringWithFont:(id)arg1 ;
-(long long)maxLines;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)accessibilityText;
-(id)_stringFromNumberElement:(id)arg1 ;
-(id)_stringFromDateElement:(id)arg1 ;
-(id)_stringFromDurationElement:(id)arg1 ;
-(NSArray *)badges;
@end

