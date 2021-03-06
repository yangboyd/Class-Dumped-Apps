//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GSKSpeechSessionConfig, GSKVoiceInputController, GSKVoiceSearchLanguageSelectorViewController, NSData, NSString, UIColor, UIView;

@protocol GSKVoiceInputControllerDelegate <NSObject>
- (void)voiceInputControllerDidFailToStart:(GSKVoiceInputController *)arg1;
- (void)voiceInputController:(GSKVoiceInputController *)arg1 didReceiveResult:(NSString *)arg2;

@optional
- (void)voiceInputController:(GSKVoiceInputController *)arg1 willShowLanguagePicker:(GSKVoiceSearchLanguageSelectorViewController *)arg2;
- (void)voiceInputControllerDidFinishUsingAudioSession:(GSKVoiceInputController *)arg1;
- (UIColor *)languagePickerHeaderColor;
- (GSKSpeechSessionConfig *)voiceInputSpeechSessionConfig;
- (void)voiceInputControllerDidDismiss:(GSKVoiceInputController *)arg1;
- (UIView *)dismissResultToViewForVoiceInputController:(GSKVoiceInputController *)arg1;
- (UIView *)dismissButtonToViewForVoiceInputController:(GSKVoiceInputController *)arg1;
- (void)voiceInputController:(GSKVoiceInputController *)arg1 didCaptureData:(NSData *)arg2;
@end

