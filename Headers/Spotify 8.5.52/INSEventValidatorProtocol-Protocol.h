//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EventEnvelope;
@protocol INSMessageProtocol;

@protocol INSEventValidatorProtocol <NSObject>
- (_Bool)validateEnvelope:(EventEnvelope *)arg1 error:(id *)arg2;
- (_Bool)validateMessage:(id <INSMessageProtocol>)arg1 error:(id *)arg2;
@end

