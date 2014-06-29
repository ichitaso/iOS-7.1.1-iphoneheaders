/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASDownloadDelegate <NSObject>
@property (assign,getter=isStalled,nonatomic) BOOL stalled; 
@required
-(BOOL)isStalled;
-(void)startDownload:(id)arg1 withOptions:(id)arg2 inState:(id)arg3;
-(void)updateOptionsForDownload:(id)arg1 options:(id)arg2;
-(BOOL)downloadIsInFlight:(id)arg1;
-(void)pauseDownload:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)resumeDownload:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)cancelDownload:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)setStalled:(BOOL)arg1;
@end
