//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTITastebuilderItemRenderer, YTIThumbnailDetails;

@interface YTMTastebuilderItem : NSObject
{
    _Bool _visible;
    unsigned long long _listIndex;
    YTITastebuilderItemRenderer *_itemRenderer;
    YTIThumbnailDetails *_thumbnailDetails;
}

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) YTIThumbnailDetails *thumbnailDetails; // @synthesize thumbnailDetails=_thumbnailDetails;
@property(readonly, nonatomic) YTITastebuilderItemRenderer *itemRenderer; // @synthesize itemRenderer=_itemRenderer;
@property(readonly, nonatomic) unsigned long long listIndex; // @synthesize listIndex=_listIndex;
- (void).cxx_destruct;
- (id)initWithRenderer:(id)arg1 listIndex:(unsigned long long)arg2;

@end

