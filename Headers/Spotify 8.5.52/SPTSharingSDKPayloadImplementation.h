//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSharingSDKPayload-Protocol.h"

@class NSSet, NSString;

@interface SPTSharingSDKPayloadImplementation : NSObject <SPTSharingSDKPayload>
{
    NSString *_spotifyURIString;
    NSString *_utmSource;
    NSString *_utmMedium;
    NSString *_utmCampaign;
    NSString *_utmTerm;
    NSString *_utmContent;
    NSSet *_customData;
}

@property(readonly, copy, nonatomic) NSSet *customData; // @synthesize customData=_customData;
@property(readonly, copy, nonatomic) NSString *utmContent; // @synthesize utmContent=_utmContent;
@property(readonly, copy, nonatomic) NSString *utmTerm; // @synthesize utmTerm=_utmTerm;
@property(readonly, copy, nonatomic) NSString *utmCampaign; // @synthesize utmCampaign=_utmCampaign;
@property(readonly, copy, nonatomic) NSString *utmMedium; // @synthesize utmMedium=_utmMedium;
@property(readonly, copy, nonatomic) NSString *utmSource; // @synthesize utmSource=_utmSource;
@property(readonly, copy, nonatomic) NSString *spotifyURIString; // @synthesize spotifyURIString=_spotifyURIString;
- (void).cxx_destruct;
- (id)initWithSpotifyURIString:(id)arg1 utmSource:(id)arg2 utmMedium:(id)arg3 utmCampaign:(id)arg4 utmTerm:(id)arg5 utmContent:(id)arg6 customData:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

