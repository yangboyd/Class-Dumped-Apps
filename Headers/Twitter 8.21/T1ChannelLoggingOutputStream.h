//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TLSOutputStream-Protocol.h>

@class NSArray, NSMutableArray, NSSet, NSString;
@protocol T1ChannelLoggingOutputStreamDelegate;

@interface T1ChannelLoggingOutputStream : NSObject <TLSOutputStream>
{
    NSMutableArray *_logEntries;
    id <T1ChannelLoggingOutputStreamDelegate> _delegate;
    NSSet *_channels;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *channels; // @synthesize channels=_channels;
@property(nonatomic) __weak id <T1ChannelLoggingOutputStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)tls_shouldFilterLevel:(unsigned long long)arg1 channel:(id)arg2 contextObject:(id)arg3;
- (void)tls_outputLogInfo:(id)arg1;
- (void)clearLog;
@property(readonly, nonatomic) NSArray *logEntries;
- (id)initWithChannels:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

