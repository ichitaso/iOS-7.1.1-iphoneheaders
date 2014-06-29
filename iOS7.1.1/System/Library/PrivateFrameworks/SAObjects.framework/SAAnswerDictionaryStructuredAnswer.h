/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,@dynamic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * definitionGroups; 
@property (nonatomic,copy) NSString * phoneticPronunciation; 
@property (nonatomic,copy) NSURL * sound; 
@property (nonatomic,copy) NSArray * syllables; 
@property (nonatomic,copy) NSString * word; 
+(id)dictionaryStructuredAnswer;
+(id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(id)sound;
-(void)setSound:(id)arg1 ;
-(id)encodedClassName;
-(id)definitionGroups;
-(void)setDefinitionGroups:(id)arg1 ;
-(id)phoneticPronunciation;
-(void)setPhoneticPronunciation:(id)arg1 ;
-(id)syllables;
-(void)setSyllables:(id)arg1 ;
-(id)word;
-(void)setWord:(id)arg1 ;
@end
