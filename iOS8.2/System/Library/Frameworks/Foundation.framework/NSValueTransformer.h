/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSValueTransformer : NSObject
+(id)_transformerRegistry;
+(id)valueTransformerNames;
+(id)valueTransformerForName:(id)arg1 ;
+(void)setValueTransformer:(id)arg1 forName:(id)arg2 ;
+(Class)transformedValueClass;
+(char)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
@end

