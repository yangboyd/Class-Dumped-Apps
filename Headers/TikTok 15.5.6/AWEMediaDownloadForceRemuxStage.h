//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMediaDownloadBaseStage.h"

@protocol IESMMTranscoderProtocol;

@interface AWEMediaDownloadForceRemuxStage : AWEMediaDownloadBaseStage
{
    id <IESMMTranscoderProtocol> _transcoder;
}

@property(retain, nonatomic) id <IESMMTranscoderProtocol> transcoder; // @synthesize transcoder=_transcoder;
- (void).cxx_destruct;
- (void)p_trascoder;
- (void)cancel;
- (void)run;

@end

