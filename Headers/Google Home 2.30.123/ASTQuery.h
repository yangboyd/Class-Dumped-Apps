//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class ASTAPIConversationDelta, ASTAPIGacsCapabilities, ASTAPIHeadsetProperties, ASTSpeechRecognizerConfig, GIPMicroHotwordResult, NSData, NSNumber, NSString, NSURL;
@protocol GSKAudioCaptureInterface;

@interface ASTQuery : NSObject <NSSecureCoding>
{
    _Bool _serverEndpointingDisabled;
    _Bool _shouldSuppressQueryShowingInUI;
    _Bool _shouldSuppressThinkingBubbleShowingInUI;
    _Bool _shouldPlayTTS;
    long long _type;
    ASTAPIHeadsetProperties *_headsetProperties;
    long long _initiator;
    GIPMicroHotwordResult *_hotwordResult;
    long long _audioCodec;
    long long _audioSampleRate;
    long long _outputSampleRate;
    NSString *_queryString;
    NSString *_queryDisplayString;
    NSURL *_audioFilePath;
    NSData *_audioData;
    NSData *_imageData;
    NSString *_bistoModelID;
    ASTAPIGacsCapabilities *_GACSCapabilities;
    NSNumber *_allowsPersonalResultsNumber;
    ASTSpeechRecognizerConfig *_recognizerConfig;
    id <GSKAudioCaptureInterface> _audioCapture;
    double _imageDataCompressionQuailty;
    NSString *_refinementContextToken;
    NSString *_rewrittenQuery;
    ASTAPIConversationDelta *_delta;
    double _timeStamp;
    struct CGRect _focusRectOnImage;
}

+ (_Bool)supportsSecureCoding;
+ (id)musicQuery;
+ (id)queryWithDelta:(id)arg1;
+ (id)BLEVoiceQuery;
+ (id)textQueryWithQueryString:(id)arg1;
+ (id)voiceQueryWithAudioData:(id)arg1;
+ (id)voiceQueryWithAudioFilePath:(id)arg1;
+ (id)voiceQuery;
- (void).cxx_destruct;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) _Bool shouldPlayTTS; // @synthesize shouldPlayTTS=_shouldPlayTTS;
@property(nonatomic) _Bool shouldSuppressThinkingBubbleShowingInUI; // @synthesize shouldSuppressThinkingBubbleShowingInUI=_shouldSuppressThinkingBubbleShowingInUI;
@property(nonatomic) _Bool shouldSuppressQueryShowingInUI; // @synthesize shouldSuppressQueryShowingInUI=_shouldSuppressQueryShowingInUI;
@property(retain, nonatomic) ASTAPIConversationDelta *delta; // @synthesize delta=_delta;
@property(copy, nonatomic) NSString *rewrittenQuery; // @synthesize rewrittenQuery=_rewrittenQuery;
@property(copy, nonatomic) NSString *refinementContextToken; // @synthesize refinementContextToken=_refinementContextToken;
@property(nonatomic) struct CGRect focusRectOnImage; // @synthesize focusRectOnImage=_focusRectOnImage;
@property(nonatomic) double imageDataCompressionQuailty; // @synthesize imageDataCompressionQuailty=_imageDataCompressionQuailty;
@property(nonatomic) __weak id <GSKAudioCaptureInterface> audioCapture; // @synthesize audioCapture=_audioCapture;
@property(retain, nonatomic) ASTSpeechRecognizerConfig *recognizerConfig; // @synthesize recognizerConfig=_recognizerConfig;
@property(retain, nonatomic) NSNumber *allowsPersonalResultsNumber; // @synthesize allowsPersonalResultsNumber=_allowsPersonalResultsNumber;
@property(retain, nonatomic) ASTAPIGacsCapabilities *GACSCapabilities; // @synthesize GACSCapabilities=_GACSCapabilities;
@property(copy, nonatomic) NSString *bistoModelID; // @synthesize bistoModelID=_bistoModelID;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property(retain, nonatomic) NSURL *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(copy, nonatomic) NSString *queryDisplayString; // @synthesize queryDisplayString=_queryDisplayString;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) long long outputSampleRate; // @synthesize outputSampleRate=_outputSampleRate;
@property(nonatomic) long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) long long audioCodec; // @synthesize audioCodec=_audioCodec;
@property(retain, nonatomic) GIPMicroHotwordResult *hotwordResult; // @synthesize hotwordResult=_hotwordResult;
@property(nonatomic) long long initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) ASTAPIHeadsetProperties *headsetProperties; // @synthesize headsetProperties=_headsetProperties;
@property(nonatomic) _Bool serverEndpointingDisabled; // @synthesize serverEndpointingDisabled=_serverEndpointingDisabled;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isGACSQuery;
@property(readonly, nonatomic) _Bool isHistoryQuery;
@property(readonly, nonatomic) _Bool isConversationDeltaQuery;
@property(readonly, nonatomic) _Bool isBLEVoiceQuery;
@property(readonly, nonatomic) _Bool isVoiceQuery;
@property(readonly, nonatomic) _Bool isStartedByHotword;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

