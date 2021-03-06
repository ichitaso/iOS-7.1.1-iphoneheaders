/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, PRSImage, NSArray, NSURL;


@protocol PRSSimpleResult <PRSBaseResult>
@property (nonatomic,retain) NSString * templateName; 
@property (nonatomic,retain) NSString * section_header; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) int title_maxlines; 
@property (assign,nonatomic) int title_size; 
@property (nonatomic,retain) PRSImage * title_glyph; 
@property (nonatomic,retain) NSString * resultDescription; 
@property (assign,nonatomic) char description_nowrap; 
@property (assign,nonatomic) int description_maxlines; 
@property (assign,nonatomic) int description_size; 
@property (nonatomic,retain) NSString * footnote; 
@property (assign,nonatomic) char footnote_nowrap; 
@property (assign,nonatomic) int footnote_maxlines; 
@property (assign,nonatomic) int footnote_size; 
@property (nonatomic,retain) PRSImage * icon; 
@property (nonatomic,retain) NSArray * more_icons; 
@property (nonatomic,retain) NSString * card_title; 
@property (nonatomic,retain) NSArray * card_sections; 
@property (nonatomic,retain) NSURL * card_url; 
@optional
-(int)title_maxlines;
-(void)setTitle_maxlines:(int)arg1;
-(int)title_size;
-(void)setTitle_size:(int)arg1;
-(PRSImage *)title_glyph;
-(void)setTitle_glyph:(id)arg1;
-(NSString *)resultDescription;
-(void)setResultDescription:(id)arg1;
-(char)description_nowrap;
-(void)setDescription_nowrap:(char)arg1;
-(int)description_maxlines;
-(void)setDescription_maxlines:(int)arg1;
-(int)description_size;
-(void)setDescription_size:(int)arg1;
-(char)footnote_nowrap;
-(void)setFootnote_nowrap:(char)arg1;
-(int)footnote_maxlines;
-(void)setFootnote_maxlines:(int)arg1;
-(int)footnote_size;
-(void)setFootnote_size:(int)arg1;
-(NSArray *)more_icons;
-(void)setMore_icons:(id)arg1;
-(NSString *)card_title;
-(void)setCard_title:(id)arg1;
-(NSArray *)card_sections;
-(void)setCard_sections:(id)arg1;
-(NSURL *)card_url;
-(void)setCard_url:(id)arg1;
-(void)setFootnote:(id)arg1;
-(NSString *)footnote;

@required
-(PRSImage *)icon;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setIcon:(id)arg1;
-(NSString *)section_header;
-(void)setSection_header:(id)arg1;
-(NSString *)templateName;
-(void)setTemplateName:(id)arg1;

@end

