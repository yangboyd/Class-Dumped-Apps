//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FPRInstrument.h"

@class FPRNSURLSessionDelegateInstrument;

@interface FPRNSURLSessionInstrument : FPRInstrument
{
    FPRNSURLSessionDelegateInstrument *_delegateInstrument;
}

@property(retain, nonatomic) FPRNSURLSessionDelegateInstrument *delegateInstrument; // @synthesize delegateInstrument=_delegateInstrument;
- (void).cxx_destruct;
- (void)registerProxyObject:(id)arg1;
- (void)registerInstrumentorForClass:(Class)arg1;
- (void)deregisterInstrumentors;
- (void)registerInstrumentors;
- (id)init;

@end

