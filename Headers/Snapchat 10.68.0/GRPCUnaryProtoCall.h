//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, GRPCStreamingProtoCall;

@interface GRPCUnaryProtoCall : NSObject
{
    GRPCStreamingProtoCall *_call;
    GPBMessage *_message;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithRequestOptions:(id)arg1 message:(id)arg2 responseHandler:(id)arg3 callOptions:(id)arg4 responseClass:(Class)arg5;

@end

