//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GOOGRTCMediaStreamTrack, GOOGRTCRtpParameters, NSArray, NSString;
@protocol GOOGRTCDtmfSender;

@protocol GOOGRTCRtpSender <NSObject>
@property(readonly, nonatomic) id <GOOGRTCDtmfSender> dtmfSender;
@property(copy, nonatomic) NSArray *streamIds;
@property(copy, nonatomic) GOOGRTCMediaStreamTrack *track;
@property(copy, nonatomic) GOOGRTCRtpParameters *parameters;
@property(readonly, nonatomic) NSString *senderId;
@end

