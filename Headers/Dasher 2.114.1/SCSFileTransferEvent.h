//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceChat/SCSChatEvent.h>

@class SCSFileTransferRequest;

@interface SCSFileTransferEvent : SCSChatEvent
{
    SCSFileTransferRequest *_request;
}

@property(retain, nonatomic) SCSFileTransferRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithSender:(id)arg1 type:(unsigned long long)arg2 request:(id)arg3;

@end

