//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

#import "ALXContentDirective-Protocol.h"

@class ALXDirectiveHeader, ALXPlayDirectivePayload, ALXPlayDirectiveProgressReport, NSData, NSString;
@protocol Ignore;

@interface ALXPlayDirective : JSONModel <ALXContentDirective>
{
    NSData<Ignore> *_audioData;
    ALXDirectiveHeader *_header;
    ALXPlayDirectivePayload *_payload;
}

+ (_Bool)propertyIsIgnored:(id)arg1;
@property(retain, nonatomic) ALXPlayDirectivePayload *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) ALXDirectiveHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) NSData<Ignore> *audioData; // @synthesize audioData=_audioData;
- (void).cxx_destruct;
@property(readonly, nonatomic) ALXPlayDirectiveProgressReport *progressReport;
@property(readonly, nonatomic) NSString<Ignore> *audioItemId;
@property(readonly, nonatomic) long long offsetInMilliseconds;
@property(readonly, nonatomic) NSString<Ignore> *URL;
@property(readonly, nonatomic) NSString<Ignore> *token;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

