/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:50 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIViewVisitor.h>

@interface _UIViewBlockVisitor : _UIViewVisitor {

	/*^block*/id _visitorBlock;

}

@property (nonatomic,copy) id visitorBlock;              //@synthesize visitorBlock=_visitorBlock - In the implementation block
-(void)dealloc;
-(id)initWithTraversalDirection:(unsigned)arg1 visitorBlock:(/*^block*/id)arg2 ;
-(char)_visitView:(id)arg1 ;
-(void)setVisitorBlock:(id)arg1 ;
-(id)visitorBlock;
@end

