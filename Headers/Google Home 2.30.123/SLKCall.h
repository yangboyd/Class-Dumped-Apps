//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, SLKClearcutLogEvent, SLKClearcutLogger;
@protocol SLKCallResolver, SLKOutputTranslator, SLKService;

@interface SLKCall : NSObject
{
    id <SLKService> _target;
    SEL _selector;
    NSDictionary *_methodParameters;
    NSData *_inputProtoData;
    id <SLKOutputTranslator> _outputTranslator;
    id <SLKCallResolver> _resolver;
    long long _state;
    SLKClearcutLogEvent *_logEvent;
    SLKClearcutLogger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SLKClearcutLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SLKClearcutLogEvent *logEvent; // @synthesize logEvent=_logEvent;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak id <SLKCallResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <SLKOutputTranslator> outputTranslator; // @synthesize outputTranslator=_outputTranslator;
@property(readonly, nonatomic) NSData *inputProtoData; // @synthesize inputProtoData=_inputProtoData;
@property(readonly, nonatomic) NSDictionary *methodParameters; // @synthesize methodParameters=_methodParameters;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id <SLKService> target; // @synthesize target=_target;
- (void)rejectWithError:(id)arg1;
- (void)resolveWithResults:(id)arg1 orProto:(id)arg2;
- (void)resolveWithProto:(id)arg1;
- (void)resolveWithResults:(id)arg1;
- (void)execute;
- (void)callDidComplete;
- (void)rejectIfMalformed;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 methodParameters:(id)arg3 inputProtoData:(id)arg4 outputTranslator:(id)arg5 resolver:(id)arg6 logEvent:(id)arg7 logger:(id)arg8;

@end

