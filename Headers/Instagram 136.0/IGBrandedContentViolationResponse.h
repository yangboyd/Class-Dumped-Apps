//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItem, IGGenericMegaphone, IGReel, NSString;

@interface IGBrandedContentViolationResponse : NSObject
{
    IGGenericMegaphone *_megaphone;
    IGFeedItem *_feedItem;
    IGReel *_reel;
    NSString *_mediaId;
}

@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) IGReel *reel; // @synthesize reel=_reel;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
- (void).cxx_destruct;
- (id)initWithViolationMegaphone:(id)arg1 feedItem:(id)arg2 reel:(id)arg3 mediaId:(id)arg4;

@end

