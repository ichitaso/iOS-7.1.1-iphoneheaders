/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SVSTranscriptViewControllerDelegate <NSObject>
@required
-(int)initialDisplayTypeForTranscriptViewController:(id)arg1;
-(CGRect*)statusBarFrameForTranscriptViewController:(id)arg1;
-(char)transcriptViewControllerWillShowSuggestions:(id)arg1;
-(void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1;
-(char)transcriptViewControllerShouldPreventUserInteraction:(id)arg1;
-(void)transcriptViewControllerWillBeginEditing:(id)arg1;
-(void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;
-(void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(int)arg4;
-(void)cancelRequestForTranscriptViewController:(id)arg1;
-(void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2;
-(void)transcriptViewController:(id)arg1 setStatusViewHidden:(char)arg2;
-(void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)transcriptViewController:(id)arg1 setStatusBarHidden:(char)arg2;
-(void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(char)arg3 completion:(/*^block*/id)arg4;
-(void)cancelSpeakingForTranscriptViewController:(id)arg1;
-(void)transcriptViewControllerDidShowSuggestions:(id)arg1;
-(void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;
-(void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2;
-(void)transcriptViewController:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 forInterval:(double)arg3;
-(void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3;

@end

