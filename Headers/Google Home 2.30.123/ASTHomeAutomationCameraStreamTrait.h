//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTHomeAutomationBaseTrait.h"

@class ASTHomeAutomationCameraAudioCommunicationTypeParameter, ASTHomeAutomationCameraAuthTokenParameter, ASTHomeAutomationCameraICEServersParameter, ASTHomeAutomationCameraOfferParameter, ASTHomeAutomationCameraStreamAuthTokenExpirationParameter, ASTHomeAutomationCameraStreamAuthTokenTypeParameter, ASTHomeAutomationCameraStreamHostParameter, ASTHomeAutomationCameraStreamProtocolParameter, ASTHomeAutomationCameraStreamSignalingURLParameter, ASTHomeAutomationCameraStreamURLParameter, NSArray;

@interface ASTHomeAutomationCameraStreamTrait : ASTHomeAutomationBaseTrait
{
    _Bool _cameraStreamNeedAuthToken;
    NSArray *_cameraStreamSupportedProtocols;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isCameraStreamNeedAuthToken) _Bool cameraStreamNeedAuthToken; // @synthesize cameraStreamNeedAuthToken=_cameraStreamNeedAuthToken;
@property(copy, nonatomic) NSArray *cameraStreamSupportedProtocols; // @synthesize cameraStreamSupportedProtocols=_cameraStreamSupportedProtocols;
@property(readonly, nonatomic) ASTHomeAutomationCameraStreamHostParameter *streamHostParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraAudioCommunicationTypeParameter *audioCommunicationType;
@property(readonly, nonatomic) ASTHomeAutomationCameraStreamSignalingURLParameter *streamSignalingURLParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraOfferParameter *offerParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraICEServersParameter *ICEServersParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraStreamAuthTokenExpirationParameter *tokenExpirationParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraStreamAuthTokenTypeParameter *tokenTypeParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraAuthTokenParameter *authTokenParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraStreamURLParameter *streamURLParameter;
@property(readonly, nonatomic) ASTHomeAutomationCameraStreamProtocolParameter *streamProtocolParameter;
- (long long)traitType;
- (id)initWithAttributes:(id)arg1 attributesTranslator:(id)arg2;

@end

