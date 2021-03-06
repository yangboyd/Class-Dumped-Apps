//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class ASTAPIAssistantResponse, ASTAPIConversationDelta, ASTAction, ASTQuery, NSArray, NSData, NSString, PinholeOutput;

@interface ASTSearchResult : NSObject <NSSecureCoding>
{
    int _featureEnum;
    NSArray *_renderingResults;
    ASTQuery *_query;
    NSData *_TTSData;
    NSData *_dialogToken;
    NSString *_eventID;
    ASTAPIConversationDelta *_conversationDelta;
    NSString *_sherlogLink;
    NSArray *_legacySuggestions;
    PinholeOutput *_pinholeOutput;
    ASTAPIAssistantResponse *_assistantResponse;
    ASTAction *_action;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) ASTAction *action; // @synthesize action=_action;
@property(retain, nonatomic) ASTAPIAssistantResponse *assistantResponse; // @synthesize assistantResponse=_assistantResponse;
@property(readonly, nonatomic) int featureEnum; // @synthesize featureEnum=_featureEnum;
@property(readonly, nonatomic) PinholeOutput *pinholeOutput; // @synthesize pinholeOutput=_pinholeOutput;
@property(readonly, nonatomic) NSArray *legacySuggestions; // @synthesize legacySuggestions=_legacySuggestions;
@property(readonly, nonatomic) NSString *sherlogLink; // @synthesize sherlogLink=_sherlogLink;
@property(readonly, nonatomic) ASTAPIConversationDelta *conversationDelta; // @synthesize conversationDelta=_conversationDelta;
@property(readonly, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(readonly, nonatomic) NSData *dialogToken; // @synthesize dialogToken=_dialogToken;
@property(retain, nonatomic) NSData *TTSData; // @synthesize TTSData=_TTSData;
@property(retain, nonatomic) ASTQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSArray *renderingResults; // @synthesize renderingResults=_renderingResults;
- (void)processConversationParamEntry:(id)arg1;
@property(readonly, nonatomic) _Bool pendingAdditionalOutput;
@property(readonly, nonatomic) _Bool expectFollowOn;
@property(readonly, nonatomic) _Bool shouldReopenMic;
- (_Bool)actionBlacklisted;
- (_Bool)shouldHandleAction;
@property(readonly, nonatomic) _Bool isCCLResponse;
@property(readonly, nonatomic) _Bool containsRenderedCard;
@property(readonly, nonatomic) _Bool containsNativeForm;
@property(readonly, nonatomic) _Bool containsProviderOpenClientOp;
@property(readonly, nonatomic) _Bool containsMediaSoundSearchClientOp;
@property(readonly, nonatomic) _Bool containsSRPClientOp;
@property(readonly, nonatomic) _Bool containsTextResponseOnly;
@property(readonly, nonatomic) long long modality;
@property(readonly, nonatomic) _Bool shouldPlayTTS;
- (void)processAssistantResponse:(id)arg1 withContext:(id)arg2;
- (void)processPinholeOutput:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1;

@end

