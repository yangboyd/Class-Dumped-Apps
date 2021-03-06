//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNChip.h"

@class GSCImageIconSpec, GSCImageView, NSString;

@interface DYNVideoChip : DYNChip
{
    NSString *_youtubeID;
    GSCImageView *_thumbnailView;
    GSCImageIconSpec *_videoPlayIconSpec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GSCImageIconSpec *videoPlayIconSpec; // @synthesize videoPlayIconSpec=_videoPlayIconSpec;
@property(retain, nonatomic) GSCImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) NSString *youtubeID; // @synthesize youtubeID=_youtubeID;
- (id)accessibilityLabel;
- (void)updateViewWithImageURL:(id)arg1;
@property(readonly, nonatomic) NSString *videoURL;
- (id)initWithFrame:(struct CGRect)arg1;

@end

