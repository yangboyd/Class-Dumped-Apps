//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEFeedAnchorBaseConfig.h"

@class AWEMarkView;

@interface AWEFeedAnchorI18NMovieConfig : AWEFeedAnchorBaseConfig
{
    AWEMarkView *_movieView;
}

+ (_Bool)p_hasAnchorData:(id)arg1;
+ (_Bool)hasAnchorViewDataWithAwemeModelForFeed:(id)arg1 extraInfo:(id)arg2;
+ (id)anchorType;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEMarkView *movieView; // @synthesize movieView=_movieView;
- (void)anchorViewWillShowOnSuperview;
- (id)anchorViewWithModel:(id)arg1;
- (void)updateWithAwemeModel:(id)arg1;
- (CDUnknownBlockType)layoutWithAwemeModel:(id)arg1 commonLayoutInfo:(id)arg2;

@end

