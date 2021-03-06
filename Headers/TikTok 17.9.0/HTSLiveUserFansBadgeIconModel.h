//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveImage, NSString;

@interface HTSLiveUserFansBadgeIconModel : MTLModel <MTLJSONSerializing>
{
    IESLiveImage *_icon;
    IESLiveImage *_smallIcon;
}

+ (id)smallIconJSONTransformer;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveImage *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(retain, nonatomic) IESLiveImage *icon; // @synthesize icon=_icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

