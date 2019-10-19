//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageNaturalLanguageError3 : SPTLogMessage
{
    _Bool _userRefusedValue;
    NSString *_utteranceIdValue;
    NSString *_errorTypeValue;
    NSString *_errorTextValue;
    NSString *_referrerValue;
}

+ (id)messageWithUtteranceId:(id)arg1 errorType:(id)arg2 errorText:(id)arg3 referrer:(id)arg4 userRefused:(_Bool)arg5;
@property(nonatomic) _Bool userRefusedValue; // @synthesize userRefusedValue=_userRefusedValue;
@property(copy, nonatomic) NSString *referrerValue; // @synthesize referrerValue=_referrerValue;
@property(copy, nonatomic) NSString *errorTextValue; // @synthesize errorTextValue=_errorTextValue;
@property(copy, nonatomic) NSString *errorTypeValue; // @synthesize errorTypeValue=_errorTypeValue;
@property(copy, nonatomic) NSString *utteranceIdValue; // @synthesize utteranceIdValue=_utteranceIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

