//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ApacheThrift/TProtocolDecorator.h>

@class NSString;

@interface TMultiplexedProtocol : TProtocolDecorator
{
    NSString *mServiceName;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (id)initWithProtocol:(id)arg1 serviceName:(id)arg2;

@end

