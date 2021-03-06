//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFSpeechClientDelegate-Protocol.h"
#import "BFSpeechToTextRequestDelegate-Protocol.h"

@class BFSpeechClient, NSString, SNZVoiceAppContext, SNZVoiceAssistantViewController, SNZVoiceNavigationManager;

@interface SNZBluefrontAssistantManager : NSObject <BFSpeechClientDelegate, BFSpeechToTextRequestDelegate>
{
    _Bool _speechClientPrepared;
    BFSpeechClient *_speechClient;
    unsigned long long _speechRecognitionState;
    SNZVoiceAssistantViewController *_voiceAssistantViewController;
    NSString *_accessToken;
    SNZVoiceNavigationManager *_navigationManager;
    SNZVoiceAppContext *_appContext;
}

@property(retain, nonatomic) SNZVoiceAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) SNZVoiceNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) __weak SNZVoiceAssistantViewController *voiceAssistantViewController; // @synthesize voiceAssistantViewController=_voiceAssistantViewController;
@property(nonatomic) unsigned long long speechRecognitionState; // @synthesize speechRecognitionState=_speechRecognitionState;
@property(nonatomic) _Bool speechClientPrepared; // @synthesize speechClientPrepared=_speechClientPrepared;
@property(retain, nonatomic) BFSpeechClient *speechClient; // @synthesize speechClient=_speechClient;
- (void).cxx_destruct;
- (id)bluefrontRequestWithID:(id)arg1 device:(id)arg2 endpoint:(id)arg3;
- (void)transitionToState:(unsigned long long)arg1;
- (void)didFinishWithTextResult:(id)arg1;
- (void)didHaveError:(id)arg1;
- (void)onNoSpeechTimeout;
- (void)onMaxSpeechTimeout;
- (void)didStopRecordingByEndpointer;
- (void)didStopRecording;
- (void)didDetectSoundLevelChange:(double)arg1;
- (void)didReceiveBuffer:(id)arg1;
- (void)didStartRecording;
- (void)didReadyForRecording;
- (void)cancelSpeechRequest;
- (void)stopSpeechRecognition;
- (void)startSpeechRecognition;
- (void)prepareForSpeechRecognition;
- (id)initWithViewController:(id)arg1 appContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

