//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioSessionDelegate.h"

@class AVAudioSession, NSString;

@interface AkAudioSessionImp : NSObject <AVAudioSessionDelegate>
{
    _Bool _m_bDeviceHasInput;
    _Bool _m_wasOtherAppAudioPlaying;
    _Bool _m_bHandlingInterruption;
    _Bool _m_bHandlingUserInterruptionCallback;
    _Bool _m_bDeferPostInterruptionActions;
    AVAudioSession *_m_session;
}

@property(nonatomic) _Bool m_bDeferPostInterruptionActions; // @synthesize m_bDeferPostInterruptionActions=_m_bDeferPostInterruptionActions;
@property(nonatomic) _Bool m_bHandlingUserInterruptionCallback; // @synthesize m_bHandlingUserInterruptionCallback=_m_bHandlingUserInterruptionCallback;
@property(nonatomic) _Bool m_bHandlingInterruption; // @synthesize m_bHandlingInterruption=_m_bHandlingInterruption;
@property(nonatomic) _Bool m_wasOtherAppAudioPlaying; // @synthesize m_wasOtherAppAudioPlaying=_m_wasOtherAppAudioPlaying;
@property(nonatomic) _Bool m_bDeviceHasInput; // @synthesize m_bDeviceHasInput=_m_bDeviceHasInput;
@property(retain) AVAudioSession *m_session; // @synthesize m_session=_m_session;
- (void).cxx_destruct;
- (void)executeDeferredUserInterruptionEndCallback;
- (void)DoSourceChangeCallback:(_Bool)arg1;
- (void)DoInterruptionCallback:(_Bool)arg1;
- (void)SilenceSecondaryAudioHintCallback:(id)arg1;
- (void)MediaServiceResetCallback:(id)arg1;
- (void)RouteChangeCallback:(id)arg1;
- (void)InterruptionCallback:(id)arg1;
- (_Bool)Deactivate;
- (_Bool)Activate;
- (_Bool)isMixableWithOtherApps;
- (_Bool)checkIfOtherAppAudioPlaying;
- (void)checkUserMusicStateChange;
- (void)checkUserMusic;
- (unsigned int)configureOutputChannel;
- (_Bool)IsBluetooth;
- (_Bool)setupOutput:(id *)arg1;
- (_Bool)setupInput:(id *)arg1;
- (void)termSession:(id *)arg1;
- (void)registerNotifications;
- (_Bool)initSession:(id *)arg1;
- (void)AppForegroundCallback:(id)arg1;
- (void)AppBackgroundCallback:(id)arg1;
- (void)validateAVAudioSessionCategoryOptions;
- (id)getAVAudioSessionMode:(int)arg1;
- (id)getAVAudioSessionCategory:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

