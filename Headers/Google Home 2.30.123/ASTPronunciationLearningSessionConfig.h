//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSKSpeechSessionConfig.h"

@class NSString;

@interface ASTPronunciationLearningSessionConfig : GSKSpeechSessionConfig
{
    NSString *_localeIdentifier;
    NSString *_transcript;
    NSString *_accessToken;
}

- (void).cxx_destruct;
- (id)pronLearningRequest;
- (id)userInfo;
- (_Bool)requiresRecognitionResult;
- (id)preAudioRequest;
- (id)initialRequest;
- (id)protoExtensionRegistry;
- (_Bool)isGAIALoggingAllowed;
- (id)serviceType;
- (id)initWithLocaleIdentifier:(id)arg1 transcript:(id)arg2 accessToken:(id)arg3;

@end

