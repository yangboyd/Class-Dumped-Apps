//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class ALXRecognizeEventInitiatorPayload, NSString;

@interface ALXRecognizeEventInitiator : JSONModel
{
    NSString *_type;
    ALXRecognizeEventInitiatorPayload *_payload;
}

@property(retain, nonatomic) ALXRecognizeEventInitiatorPayload *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithInitiator:(_Bool)arg1 withWakewordIndices:(id)arg2;

@end

