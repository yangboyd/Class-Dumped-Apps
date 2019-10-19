//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSKSessionConfig.h"

@interface GSKSpeechSessionConfig : GSKSessionConfig
{
}

+ (id)deviceInfoIdentifierString;
- (_Bool)useSsl;
- (_Bool)enableHttp;
- (_Bool)enableTcp;
- (id)utteranceLogDirectory;
- (_Bool)isMultiDeviceArbitrationEnabled;
- (_Bool)requiresRecognitionResult;
- (float)maximumAudioRequestRate;
- (id)protoExtensionRegistry;
- (_Bool)isPreambleAudio;
- (id)deviceSelectionInput;
- (id)deviceInfo;
- (id)preambleAudioInfo;
- (id)audioInfo;
- (id)initialRequest;
- (id)preAudioRequest;
- (_Bool)isGAIALoggingAllowed;
- (id)loggingInfo;
- (id)userInfo;
- (id)recognizerInfo;
- (id)recognitionContext;
- (id)additionalSpokenLanguages;
- (id)spokenLanguage;
- (_Bool)enableEndpointerEvents;
- (double)partialResultConfidenceThreshold;
- (_Bool)enablePartialResults;
- (long long)maxNBestResults;
- (id)serviceType;

@end

