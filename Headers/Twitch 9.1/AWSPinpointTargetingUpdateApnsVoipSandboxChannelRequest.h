//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class AWSPinpointTargetingAPNSVoipSandboxChannelRequest, NSString;

@interface AWSPinpointTargetingUpdateApnsVoipSandboxChannelRequest : AWSRequest
{
    AWSPinpointTargetingAPNSVoipSandboxChannelRequest *_APNSVoipSandboxChannelRequest;
    NSString *_applicationId;
}

+ (id)APNSVoipSandboxChannelRequestJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(retain, nonatomic) AWSPinpointTargetingAPNSVoipSandboxChannelRequest *APNSVoipSandboxChannelRequest; // @synthesize APNSVoipSandboxChannelRequest=_APNSVoipSandboxChannelRequest;

@end

