/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSAlbumSharingDaemonDelegate <NSObject>
@optional
-(void)MSAlbumSharingDaemon:(id)arg1 didForgetPersonID:(id)arg2;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManyAlbumsError:(id)arg2 personID:(id)arg3;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManyPhotosError:(id)arg2 forAlbum:(id)arg3 personID:(id)arg4;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManySubscriptionsError:(id)arg2 personID:(id)arg3;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManyCommentsError:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 personID:(id)arg5;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveCommentTooLongError:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 personID:(id)arg5;

@required
-(void)MSAlbumSharingDaemonDidUnidleMomentarily:(id)arg1;
-(void)MSAlbumSharingDaemonDidIdle:(id)arg1;
-(void)MSAlbumSharingDaemonDidUnidle:(id)arg1;

@end

