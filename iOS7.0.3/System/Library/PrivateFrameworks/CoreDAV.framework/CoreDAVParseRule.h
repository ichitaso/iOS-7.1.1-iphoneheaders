/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CoreDAVParseRule : NSObject {

	int _minimumNumber;
	int _maximumNumber;
	NSString* _nameSpace;
	NSString* _elementName;
	Class _objectClass;
	SEL _setterMethod;

}

@property (readonly) int minimumNumber;                   //@synthesize minimumNumber=_minimumNumber - In the implementation block
@property (readonly) int maximumNumber;                   //@synthesize maximumNumber=_maximumNumber - In the implementation block
@property (readonly) NSString * nameSpace;                //@synthesize nameSpace=_nameSpace - In the implementation block
@property (readonly) NSString * elementName;              //@synthesize elementName=_elementName - In the implementation block
@property (readonly) Class objectClass;                   //@synthesize objectClass=_objectClass - In the implementation block
@property (readonly) SEL setterMethod;                    //@synthesize setterMethod=_setterMethod - In the implementation block
-(void)dealloc;
-(id)description;
-(id)nameSpace;
-(id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 ;
-(id)elementName;
-(Class)objectClass;
-(SEL)setterMethod;
-(int)minimumNumber;
-(int)maximumNumber;
@end

