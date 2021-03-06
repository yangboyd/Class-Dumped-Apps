//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, SRDSSearchLinkModel, SRDSSearchNativeBadgeModel;
@protocol Optional;

@interface SRDSSearchShippingStatusModel : JSONModel
{
    NSString<Optional> *_message;
    NSNumber<Optional> *_hasBadge;
    NSString<Optional> *_badgeAssetId;
    SRDSSearchLinkModel<Optional> *_badgeLink;
    SRDSSearchNativeBadgeModel<Optional> *_badge;
}

@property(retain, nonatomic) SRDSSearchNativeBadgeModel<Optional> *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) SRDSSearchLinkModel<Optional> *badgeLink; // @synthesize badgeLink=_badgeLink;
@property(retain, nonatomic) NSString<Optional> *badgeAssetId; // @synthesize badgeAssetId=_badgeAssetId;
@property(retain, nonatomic) NSNumber<Optional> *hasBadge; // @synthesize hasBadge=_hasBadge;
@property(retain, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

