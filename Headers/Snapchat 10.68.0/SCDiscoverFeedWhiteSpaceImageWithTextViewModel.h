//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCDiscoverFeedLogoOverlayViewModel, SCNetworkImage;

@interface SCDiscoverFeedWhiteSpaceImageWithTextViewModel : NSObject <NSCopying>
{
    SCNetworkImage *_imageThumbnail;
    SCDiscoverFeedLogoOverlayViewModel *_logoOverlayViewModel;
    NSAttributedString *_titleText;
    struct CGSize _preferredSize;
}

@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) SCDiscoverFeedLogoOverlayViewModel *logoOverlayViewModel; // @synthesize logoOverlayViewModel=_logoOverlayViewModel;
@property(readonly, copy, nonatomic) SCNetworkImage *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageThumbnail:(id)arg1 logoOverlayViewModel:(id)arg2 titleText:(id)arg3 preferredSize:(struct CGSize)arg4;

@end

