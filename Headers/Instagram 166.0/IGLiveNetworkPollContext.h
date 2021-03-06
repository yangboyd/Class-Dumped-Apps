//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGHTTPResponse, IGURLRequest, NSDate;

@interface IGLiveNetworkPollContext : NSObject
{
    IGURLRequest *_request;
    IGHTTPResponse *_response;
    NSDate *_requestSentTimestamp;
    NSDate *_responseReceivedTimestamp;
    unsigned long long _sequenceId;
    id _payload;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
@property(nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain, nonatomic) NSDate *responseReceivedTimestamp; // @synthesize responseReceivedTimestamp=_responseReceivedTimestamp;
@property(retain, nonatomic) NSDate *requestSentTimestamp; // @synthesize requestSentTimestamp=_requestSentTimestamp;
@property(retain, nonatomic) IGHTTPResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) IGURLRequest *request; // @synthesize request=_request;

@end

