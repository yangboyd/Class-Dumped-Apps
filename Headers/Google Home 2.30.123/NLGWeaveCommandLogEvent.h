//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface NLGWeaveCommandLogEvent : NSObject
{
    _Bool _failed;
    _Bool _hasErrorInformation;
    NSDate *_initiationDate;
    NSDate *_completionDate;
    NSString *_initiationLogMessage;
    NSString *_completionLogMessage;
    NSString *_operationKey;
    unsigned long long _historyMarkers;
    NSMutableDictionary *_initiationParametersInternal;
    NSMutableDictionary *_completionParametersInternal;
    NSNumber *_errorStatusCode;
    NSNumber *_errorCode;
    NSNumber *_errorProfileId;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSNumber *errorProfileId; // @synthesize errorProfileId=_errorProfileId;
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSNumber *errorStatusCode; // @synthesize errorStatusCode=_errorStatusCode;
@property(retain, nonatomic) NSMutableDictionary *completionParametersInternal; // @synthesize completionParametersInternal=_completionParametersInternal;
@property(retain, nonatomic) NSMutableDictionary *initiationParametersInternal; // @synthesize initiationParametersInternal=_initiationParametersInternal;
@property(nonatomic) unsigned long long historyMarkers; // @synthesize historyMarkers=_historyMarkers;
@property(nonatomic) _Bool hasErrorInformation; // @synthesize hasErrorInformation=_hasErrorInformation;
@property(nonatomic) _Bool failed; // @synthesize failed=_failed;
@property(copy, nonatomic) NSString *operationKey; // @synthesize operationKey=_operationKey;
@property(copy, nonatomic) NSString *completionLogMessage; // @synthesize completionLogMessage=_completionLogMessage;
@property(copy, nonatomic) NSString *initiationLogMessage; // @synthesize initiationLogMessage=_initiationLogMessage;
@property(retain, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(retain, nonatomic) NSDate *initiationDate; // @synthesize initiationDate=_initiationDate;
@property(readonly, nonatomic) _Bool hasInitiationData;
- (void)addRequestErrorWithErrorCode:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)addProfileErrorWithStatusCode:(unsigned long long)arg1 errorCode:(unsigned long long)arg2 profileId:(unsigned long long)arg3 errorMessage:(id)arg4;
@property(readonly, nonatomic) NSDictionary *errorParameters;
@property(readonly, nonatomic) NSDictionary *completionParameters;
@property(readonly, nonatomic) NSDictionary *initiationParameters;
- (void)addCompletionParameter:(id)arg1 forKey:(id)arg2;
- (void)addInitiationParameter:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

