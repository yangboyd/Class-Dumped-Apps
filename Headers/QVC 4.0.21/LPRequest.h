//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Leanplum/LPRequesting-Protocol.h>

@class LPCountAggregator, NSDictionary, NSString;

@interface LPRequest : NSObject <LPRequesting>
{
    _Bool _sent;
    NSString *_apiMethod;
    NSDictionary *_params;
    CDUnknownBlockType _responseBlock;
    CDUnknownBlockType _errorBlock;
    NSString *_requestId;
    NSString *_httpMethod;
    LPCountAggregator *_countAggregator;
}

+ (id)post:(id)arg1 params:(id)arg2;
+ (id)get:(id)arg1 params:(id)arg2;
@property(retain, nonatomic) LPCountAggregator *countAggregator; // @synthesize countAggregator=_countAggregator;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property _Bool sent; // @synthesize sent=_sent;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
- (void).cxx_destruct;
- (void)onError:(CDUnknownBlockType)arg1;
- (void)onResponse:(CDUnknownBlockType)arg1;
- (id)initWithHttpMethod:(id)arg1 apiMethod:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

