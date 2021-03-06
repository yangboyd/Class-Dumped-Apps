//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataContext.h"

@class NSAttributedString, NSString, XBXMediaItem;

@interface SGMediaItemDataContext : XBXDataContext
{
    _Bool _subscriptionItem;
    XBXMediaItem *_mediaItem;
    NSAttributedString *_displayPriceText;
    NSString *_displayPriceNarratorText;
    long long _titleId;
    NSString *_productId;
}

+ (id)createWithXBXMediaItem:(id)arg1 onBrowsePageMediaType:(long long)arg2;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) long long titleId; // @synthesize titleId=_titleId;
@property(copy, nonatomic) NSString *displayPriceNarratorText; // @synthesize displayPriceNarratorText=_displayPriceNarratorText;
@property(copy, nonatomic) NSAttributedString *displayPriceText; // @synthesize displayPriceText=_displayPriceText;
@property(retain, nonatomic) XBXMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic, getter=isSubscriptionItem) _Bool subscriptionItem; // @synthesize subscriptionItem=_subscriptionItem;
- (void).cxx_destruct;

@end

