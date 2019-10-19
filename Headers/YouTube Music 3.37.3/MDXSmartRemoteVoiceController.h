//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKMicButtonControllerDelegate-Protocol.h"
#import "GSKSpeechToTextStreamingControllerDelegate-Protocol.h"
#import "GSKVoiceSearchSoundControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GSKMicButtonController, GSKSpeechToTextStreamingController, GSKVoiceSearchSoundController, GSKVoiceSearchViewControllerConfiguration, MDXPermissionsController, NSString;
@protocol MDXSmartRemoteVoiceControllerDelegate, YTResponder;

@interface MDXSmartRemoteVoiceController : NSObject <GSKMicButtonControllerDelegate, GSKSpeechToTextStreamingControllerDelegate, GSKVoiceSearchSoundControllerDelegate, YTResponder>
{
    GSKVoiceSearchSoundController *_soundController;
    GSKVoiceSearchViewControllerConfiguration *_voiceSearchControllerConfig;
    MDXPermissionsController *_permissionsController;
    _Bool _initiatedViaSyntheticClick;
    id <YTResponder> _parentResponder;
    id <MDXSmartRemoteVoiceControllerDelegate> _delegate;
    GSKMicButtonController *_micButtonController;
    GSKSpeechToTextStreamingController *_textStreamingController;
}

@property(retain, nonatomic) GSKSpeechToTextStreamingController *textStreamingController; // @synthesize textStreamingController=_textStreamingController;
@property(retain, nonatomic) GSKMicButtonController *micButtonController; // @synthesize micButtonController=_micButtonController;
@property(nonatomic) __weak id <MDXSmartRemoteVoiceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)startVoiceSearch;
- (void)stopVoiceSearch;
- (void)userDidStartVoiceSearch;
- (_Bool)isPerformingVoiceSearch;
- (_Bool)setUpAudioSession;
- (void)micButtonControllerDidTapMicButton:(id)arg1;
- (void)voiceSearchSoundController:(id)arg1 didFinishPlaybackWithSoundType:(unsigned long long)arg2;
- (void)speechToTextStreamingControllerDidFinish:(id)arg1;
- (void)speechToTextStreamingController:(id)arg1 didReceivePartialResultWithStablePrefix:(id)arg2 unstableSuffix:(id)arg3;
- (void)speechToTextStreamingController:(id)arg1 didReceiveResult:(id)arg2;
- (void)speechToTextStreamingController:(id)arg1 didEncounterError:(id)arg2;
- (void)cancelVoiceSearch;
- (void)initiateVoiceSearch;
- (id)micButtonView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

